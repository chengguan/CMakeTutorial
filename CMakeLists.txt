cmake_minimum_required(VERSION 3.16)

project(CMakeTutorial VERSION 1.0.0 LANGUAGES C CXX)

# Override default settings.
set(CMAKE_CXX_STANDARD          17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS        OFF)

# Define project variables.
set(LIBRARY_NAME Library)
set(EXECUTABLE_NAME Executable)

# Add project subdirectories.
add_subdirectory(config)
add_subdirectory(src)
add_subdirectory(app)
