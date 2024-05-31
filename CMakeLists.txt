# Specify the minimum version of CMake required
cmake_minimum_required(VERSION 3.15)

# Set the project name
project(RaylibCPPStarterTemplate)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Specify the source files
file(GLOB SOURCES
    src/imps/*.cpp
    src/main.cpp
)

# Specify the header files using GLOB
file(GLOB HEADERS "src/headers/*.h")
# Add an executable target
add_executable(main ${SOURCES} ${HEADERS})

# Include the header files
target_include_directories(main PRIVATE src/headers)

# Link libraries (if needed)
target_link_libraries(main raylib)

# Add additional directories for libraries if needed
# Example: link_directories(lib)
