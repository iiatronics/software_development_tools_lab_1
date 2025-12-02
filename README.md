# software_development_tools_lab_1
Software development tools lab_1. 2nd year 1 semester.

## Features

The program provides a user menu with the following capabilities:

1. **String Reversal:** Returns the input string in reverse order.
2. **Palindrome Check:** Determines if the string is a palindrome (ignoring case and whitespace).
3. **Word Analysis:** Counts the total number of words and the frequency of each word's occurrence in the text.
4. **Text Sanitization:** Removes specific characters specified by the user.
5. **String Trimming:** Truncates the string to a specified length.

## Technologies

* **Language:** C++
* **Testing:** Google Test (GTest)
* **Build System:** CMake

<<<<<<< HEAD
### Program Compilation:

```bash
##g++ main.cpp functions.cpp -o string_app
```

### UNIT test compilation and run:
```
mkdir build
cd build
cmake ..
cmake --build .
ctest
```
## Project structure
```
├── main.cpp                  # Main program file (Menu)
├── functions.cpp             # Implementation of string processing functions
├── header.h                  # Header file
├── CMakeLists.txt            # Build configuration for tests
└── test/                     # Folder with tests
    ├── unit_tests.cpp
    └── unit_tests_borderline_cases.cpp
    
