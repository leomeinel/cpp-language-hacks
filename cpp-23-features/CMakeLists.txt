# Require a minimum version of cmake
cmake_minimum_required(VERSION 4.0)

# Set project name
project(cpp_23_features)

# Set C++ standard
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Add executable and specify sources
set(SOURCES
    main.cpp
    include/use-expected-hpp.cpp
    include/use-print-hpp.cpp
)
add_executable(main.out ${SOURCES})

# Specifies required features for compiling
target_compile_features(main.out PRIVATE cxx_std_23)

# Add include directories
target_include_directories(main.out PRIVATE include)
