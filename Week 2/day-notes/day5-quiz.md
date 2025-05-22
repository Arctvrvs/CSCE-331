# Day 5 Quiz

**Q1.** What does `ctest --output-on-failure` add over plain `ctest`?
    It allows to print, in the ctest command, what exactly failed, for if the additional command was not there, then you would only get a summary that 'n' test passed and 'm' test failed without getting the important details of the failure.


**Q2.** In your `cmake-test.yml`, which step would fail if a new test crashes?
    The "Run Tests" step, which executes all of the testing.


**Q3.** Name one advantage of returning `std::optional` over throwing in API design.
    The cost of throwing and catching exceptions can be constly, thats why.

**Q4.** Where would you add `-DCMAKE_CXX_STANDARD=20` if the project upgrades?
    Inside the CMakeLists.txt, under the run: section.

**Q5.** Which CLion pane shows Catch2 test results hierarchically?
    In the "Test Result" pane