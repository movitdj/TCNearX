cmake_minimum_required(VERSION 3.16)

project(TCNearX
    VERSION 0.1.0
    DESCRIPTION "64-bit replacement for TC Near Control Panel"
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

if(APPLE)
    set(CMAKE_OSX_DEPLOYMENT_TARGET "10.15" CACHE STRING "Minimum macOS deployment version" FORCE)
endif()

add_executable(TCNearX
    src/main.cpp
    src/Logger.cpp
    src/TCNearConnection.cpp
)

target_include_directories(TCNearX
    PRIVATE
        ${PROJECT_SOURCE_DIR}/include
)

if(CMAKE_CXX_COMPILER_ID MATCHES "AppleClang|Clang|GNU")
    target_compile_options(TCNearX PRIVATE -Wall -Wextra -Wpedantic)
endif()
