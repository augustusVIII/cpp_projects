# version of cmake to use (best between 3.10-3.15)
cmake_minimum_required(VERSION 3.10)

# names the project
project(project_learn_cmake)

# set c++ version
set(CMAKE_CXX_STANDARD 17)

# error out if the compiler doesn't support c++ 17
set(CMAKE_CXX_STANDARD_REQUIRED True)

# collect all .cpp file into a variable called sources
set(SOURCES
    main.cpp
    src/math_utils.cpp
    src/string_utils.cpp
)

# build the executable file
add_executable(project_learn_cmake ${SOURCES})

# if header files are not in the same folder as the .cpp file (src), for example, if it is in include/ you can use this code:
# target_include_directories(project_learn_cmake PRIVATE include/)
