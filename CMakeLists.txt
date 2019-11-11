cmake_minimum_required(VERSION 3.11...3.15)
if (${CMAKE_VERSION} VERSION_LESS 3.12)
    cmake_policy(VERSION ${CMAKE_MAJOR_VERSION}.${CMAKE_MINOR_VERSION})
else ()
    cmake_policy(VERSION 3.15)
endif ()
project(cpp-tutorial
        VERSION 1.0.0
        DESCRIPTION "a project forked from sinairv/Cpp-Tutorial-Samples")
set(CMAKE_CXX_STANDARD 11)

add_subdirectory(Aliases)
add_subdirectory("Arrays/Array in Functions")
add_subdirectory("Arrays/Arrays")
add_subdirectory("Arrays/Arrays and Pointers")
add_subdirectory("Arrays/Arrays of Pointers")
add_subdirectory("Arrays/Character Arrays")
add_subdirectory("Arrays/Multidimentional Arrays/Initialization")
add_subdirectory("Arrays/Multidimentional Arrays/Passing to Function")
add_subdirectory("Arrays/Static Arrays")
add_subdirectory("Binary Search/Graphical")
add_subdirectory("Binary Search/Iterative")
add_subdirectory("Binary Search/Recursive")
add_subdirectory("Bubble Sort/Efficient")
add_subdirectory("Bubble Sort/Simple")
add_subdirectory("Conditional Operator")
add_subdirectory("ENUMeration")
add_subdirectory("Filing (C++)/Creating")
add_subdirectory("Function Pointers/Array of Pointers to Functions")
add_subdirectory("Function Pointers/Function Pointers")
add_subdirectory("Functions/Call By Reference")
add_subdirectory("Functions/Declaring a Function")
add_subdirectory("Functions/Function Default Argument")
add_subdirectory("Functions/Function Template")
add_subdirectory("Functions/Inline Functions")
add_subdirectory("Functions/Overloaded Functions")
add_subdirectory("Functions/Recursive Function Calls")
add_subdirectory("Histogram")
add_subdirectory("If else Structure")
add_subdirectory("Incrementing and Decrementing")
add_subdirectory("Loops/do while Structure")
add_subdirectory("Loops/for Structure")
add_subdirectory("Math Library Functions")
add_subdirectory("Maximum")
add_subdirectory("new and delete")
add_subdirectory("Operator Overloading")
add_subdirectory("Pointers/Arrays and Pointers 1")
add_subdirectory("Pointers/Arrays and Pointers 2")
add_subdirectory("Pointers/Arrays of Pointers")
add_subdirectory("Pointers/const Qualifier and Pointers")
add_subdirectory("Pointers/Pointers")
add_subdirectory("Pointers/void Pointers")
add_subdirectory("Scoping")
add_subdirectory("setw")
add_subdirectory("sizeof Operator")
add_subdirectory("String Processing Functions/Basics")
add_subdirectory("String Processing Functions/getline Function")
add_subdirectory("String Processing Functions/strcat and strncat")
add_subdirectory("String Processing Functions/strcmp and strncmp")
add_subdirectory("String Processing Functions/strcpy and strncpy")
add_subdirectory("String Processing Functions/strlen")
add_subdirectory("String Processing Functions/strtok Function")
add_subdirectory("Structures")
add_subdirectory("switch Structure")
add_subdirectory("Type Definition")














