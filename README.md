# TCNearX

TCNearX is a professional C++17 macOS project intended to become a 64-bit replacement for TC Near Control Panel.

This repository currently contains the initial project architecture only. Audio, device communication, GUI, and IOKit integration are intentionally not implemented yet.

## Requirements

- macOS Catalina 10.15 or newer
- CMake 3.16 or newer
- Apple Clang with C++17 support

## Project Layout

```text
TCNearX/
    CMakeLists.txt
    README.md

    include/
        TCNearConnection.h
        Logger.h
        Version.h

    src/
        main.cpp
        TCNearConnection.cpp
        Logger.cpp

    docs/
    tools/
    tests/
```

## Build

```sh
cmake -S . -B build
cmake --build build
```

## Run

```sh
./build/TCNearX
```

The application prints the TCNearX version, creates a placeholder `TCNearConnection`, calls `Open()`, and prints the result.
