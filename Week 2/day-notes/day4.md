# Day 4 notes

- **CI workflow added** under `.github/workflow/cmake-test.yml`:
configures Cmake, builds with MinGW or Ninja, runs `ctest`, and fails on broken tests.

- **Badge** included in `README.md`:
(shows passing build status on `main`)