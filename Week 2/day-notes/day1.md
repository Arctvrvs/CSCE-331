# Day 1 Notes

- **Time spent**: on CMake setup and Catch2 integration.  
- **Hiccups**:  
  - Path spaces broke CMake’s generator; had to rename `Week-2` folder.  
  - Linking Catch2’s single-header was tricky on MSVC, switched to FetchContent + `Catch2WithMain`.  
- **Next goals**:  
  - Add `sub`, `mul`, `div` functions and tests.  
  - Explore parameterized tests in Catch2.  
  - Look into Git staging “hunks” in VS Code for tomorrow’s drills.
