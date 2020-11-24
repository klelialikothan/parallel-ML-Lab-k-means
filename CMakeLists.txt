cmake_minimum_required(VERSION 3.13)  # CMake version check
project(parallel-ML-Lab-k-means)               # Create project "simple_example"
set(CMAKE_C_STANDARD 11)            # Enable c11 standard

# Add main.cpp file of project root directory as source file
#set(SOURCE_FILES ./q1/k-means.c)
#set(SOURCE_FILES ./q2/k-means.c)
#set(SOURCE_FILES ./q3/k-means.c)
set(SOURCE_FILES ./q4/k-means.c)

# Add executable target with source files listed in SOURCE_FILES variable
add_executable(parallel-ML-Lab-k-means ${SOURCE_FILES})

# Add linker flags
target_link_libraries(parallel-ML-Lab-k-means m)