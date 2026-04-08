# version required to use cmake
cmake_minimum_required(VERSION 3.10)

# name the project
project(project_learn_oop)

# set C++ version
set(CMAKE_CXX_STANDARD 17)

# include the directory that contain heading files
include_directories(include)

# collect all .cpp file into a variable called sources
set(SOURCES
    src/main.cpp
    src/Dog.cpp
)

# build executable file
add_executable(project_learn_oop ${SOURCES})
