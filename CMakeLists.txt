cmake_minimum_required(VERSION 3.13)  # CMake version check
project(parallel-ML-Lab-k-means)      # Create project "parallel-ML-Lab-k-means"
set(CMAKE_C_STANDARD 11)              # Enable c11 standard (CLion & Cmake constraint)

# Add appropriate k-means.c file of project root directory as source file
#set(SOURCE_FILES ./q1/k-means.c)
#set(SOURCE_FILES ./q2/k-means.c)
#set(SOURCE_FILES ./q3/k-means.c)
#set(SOURCE_FILES ./q4/k-means.c)
#set(SOURCE_FILES ./q5/k-means.c)
set(SOURCE_FILES ./q6/k-means.c)

# Add executable target with source files listed in SOURCE_FILES variable
add_executable(parallel-ML-Lab-k-means ${SOURCE_FILES})

# Add linker flag for math library
target_link_libraries(parallel-ML-Lab-k-means m)