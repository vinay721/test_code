cmake_minimum_required(VERSION 3.10)
project(MyCppProject)

# Set C++ standard
set(CMAKE_CXX_STANDARD 11)

# Main executable
add_executable(my_app main.cpp)

# Enable testing
enable_testing()

# Add tests subdirectory
add_subdirectory(tests)
