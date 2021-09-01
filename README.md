# atv-cli
IR remote control for Apple TV using the Nokia N900 command line interface

# Building

```
mkdir build
cd build
cmake ..
make
```

# Usage: 

```
./atv-cli [up, down, left, right, menu, select]
```

**Example:** ./atv-cli menu


# Idea

This source code is based on [Pierogi](https://github.com/jpietrzak8/Pierogi), a universal remote control for N900 with a GUI.

I wanted to be able to control an Apple TV through the command line instead of a GUI, so I created this simplified version.

There's no Qt dependency, and the build is done with CMake.

Other remotes based on LIRC should work as well if you know the codes.and change main.cpp accordingly.
