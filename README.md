![raygui_cpp_256x256.png](raygui_cpp_256x256.png)

# Raygui-cpp

Raygui-cpp is a C++ wrapper for [raygui](https://github.com/raysan5/raygui) library.
Raygui was originally written in C, but this wrapper allows you to use it in C++ projects.

NOTES:

- This is a work in progress. Some functions are not yet implemented.
- To ease the integration between raylib and raygui, the `raygui.h` file has been divided in two files: `raygui.h` and
  `raygui.cpp`.
  The raygui.cpp file contains the implementation of the functions, while the `raygui.h` file contains the
  declarations.
  This is done to avoid the multiple definition of the same functions when linking the raygui library
  with raylib.

## Usage

To use raygui-cpp in your project, you need to download the source code and add it to your project.
Add the folder containing the source code to your `include` path and add the next configuration to your CMakeLists.txt
file:

```cmake
add_subdirectory(<path_to_raygui_cpp_folder>)
target_link_libraries(<your_target> raygui_cpp)
```

## More info

For more information about raygui, visit the [official raygui repository](https://github.com/raysan5/raygui).

## License

Raygui-cpp is licensed under zlib/libpng license, same as raygui. See [LICENSE.txt](LICENSE.txt) for more information.

## Author

Raygui-cpp is developed by:

- [Samuel Castrillo](https://github.com/scastd)
