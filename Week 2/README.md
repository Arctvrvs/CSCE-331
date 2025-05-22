# Week 2 – **project‑calc**

![C/C++ CI](https://github.com/Arctvrvs/CSCE-331/actions/workflows/cmake-test.yml/badge.svg?branch=main)


This directory contains the CMake-based `project-calc` 


> *Lecture track: Software Construction & Design*

![CI](https://github.com/<your-user>/CSCE-331/actions/workflows/cmake-test.yml/badge.svg?branch=main)

A miniature C++17 library used to practice clean architecture, test‑driven development (TDD), and modern CMake.  Functions now implemented:

| Function   | Purpose                                                        | Notes                                        |
| ---------- | -------------------------------------------------------------- | -------------------------------------------- |
| `add`      | integer addition                                               | trivial demo                                 |
| `sub`      | subtraction                                                    |                                              |
| `mul`      | multiplication                                                 |                                              |
| `div`      | division that **throws** `std::invalid_argument` when `b == 0` |                                              |
| `safe_div` | returns `std::optional<int>` instead of throwing               | demonstrates exception‑free error signalling |

---

## Build & Run ▶️

### 1  Prerequisites

| Tool             | Version                                   | Notes                                           |
| ---------------- | ----------------------------------------- | ----------------------------------------------- |
| **CMake**        |  ≥ 3.15                                   | Tested with 3.28 on Windows + WSL Ubuntu        |
| **C++ compiler** | GCC 11 / MinGW‑w64 8 / Clang 14           | Any compiler with C++17 support                 |
| **Build system** | **Ninja 1.11** (or `mingw32‑make`)        | Ninja is fastest and works with CLion & VS Code |
| **Catch2**       | Fetched automatically with `FetchContent` | No manual install required                      |

> **Windows one‑liner** (MSYS2):
>
> ```bash
> pacman -S mingw-w64-x86_64-gcc mingw-w64-x86_64-gdb ninja
> ```

---

### 2  One‑shot CLI (build + test)

```bash
# from repo root
cmake -S week2/project-calc -B build -G Ninja -DCMAKE_BUILD_TYPE=Debug
cmake --build build --parallel
ctest --test-dir build --output-on-failure
```

Expected output:

```
100% tests passed, 0 tests failed out of 5
```

---

### 3  CLion workflow

1. **File ▸ Open…** → select `week2/project-calc`.
2. CLion auto‑configures a *Debug* profile with **Ninja**.
3. Choose target **`unit_tests`** in the toolbar and click ▶.
4. Run **`calc_demo`** to see console behaviour.

---

### 4  VS Code workflow

```bash
cmake -S week2/project-calc -B build -G Ninja
# then use CMake Tools ▶ Build and CTest ▶ Run All Tests
```

---

### 5  CI status

The GitHub Actions workflow [`cmake-test.yml`](.github/workflows/cmake-test.yml) configures, builds and runs `ctest` on every push to `main` and `week2/*` branches.
The badge at the top of this file will stay **green** only if all unit tests pass.

---

### How to extend

* **Add new math functions** → declare in `calc.hpp`, implement in `calc.cpp`, add tests.
* **Run static analysis**
* **Release build** → create a *Release* CMake profile or call `cmake --preset release`.
