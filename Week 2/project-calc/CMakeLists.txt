cmake_minimum_required(VERSION 3.15)
project(project_calc LANGUAGES CXX)

include(FetchContent)
FetchContent_Declare(
  Catch2
  GIT_REPOSITORY https://github.com/catchorg/Catch2.git
  GIT_TAG v3.4.0
)
FetchContent_MakeAvailable(Catch2)


# Use C++17
set(CMAKE_CXX_STANDARD 17)

# ----- Library -----
add_library(calc src/calc.cpp)
target_include_directories(calc PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

# ----- Demo executable -----
add_executable(calc_demo src/main.cpp)
target_link_libraries(calc_demo PRIVATE calc)

# ----- Unit tests -----
add_executable(unit_tests tests/test_calc.cpp)
target_include_directories(unit_tests PRIVATE
  ${CMAKE_CURRENT_SOURCE_DIR}/include
  ${CMAKE_CURRENT_SOURCE_DIR}/tests
)
target_link_libraries(unit_tests PRIVATE calc Catch2::Catch2WithMain)

enable_testing()
add_test(
  NAME add_test
  COMMAND unit_tests
)