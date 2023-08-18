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

## Implementation todo list

- [x] Button ([header](include/Button.h), [source](src/Button.cpp))
- [x] CheckBox ([header](include/CheckBox.h), [source](src/CheckBox.cpp))
- [ ] ColorBarAlpha ([header](include/ColorBarAlpha.h), [source](src/ColorBarAlpha.cpp))
- [ ] ColorBarHue ([header](include/ColorBarHue.h), [source](src/ColorBarHue.cpp))
- [ ] ColorPanel ([header](include/ColorPanel.h), [source](src/ColorPanel.cpp))
- [ ] ColorPicker ([header](include/ColorPicker.h), [source](src/ColorPicker.cpp))
- [x] ComboBox ([header](include/ComboBox.h), [source](src/ComboBox.cpp))
- [x] DropdownBox ([header](include/DropdownBox.h), [source](src/DropdownBox.cpp))
- [x] DummyRec ([header](include/DummyRec.h), [source](src/DummyRec.cpp))
- [x] Globals ([header](include/Globals.h), [source](src/Globals.cpp))
- [x] Grid ([header](include/Grid.h), [source](src/Grid.cpp))
- [x] GroupBox ([header](include/GroupBox.h), [source](src/GroupBox.cpp))
- [x] Label ([header](include/Label.h), [source](src/Label.cpp))
- [x] LabelButton ([header](include/LabelButton.h), [source](src/LabelButton.cpp))
- [x] Line ([header](include/Line.h), [source](src/Line.cpp))
- [ ] ListView ([header](include/ListView.h), [source](src/ListView.cpp))
- [ ] ListViewEx ([header](include/ListViewEx.h), [source](src/ListViewEx.cpp))
- [ ] MessageBox ([header](include/MessageBox.h), [source](src/MessageBox.cpp))
- [x] Panel ([header](include/Panel.h), [source](src/Panel.cpp))
- [x] ProgressBar ([header](include/ProgressBar.h), [source](src/ProgressBar.cpp))
- [x] ScrollPanel ([header](include/ScrollPanel.h), [source](src/ScrollPanel.cpp))
- [x] Slider ([header](include/Slider.h), [source](src/Slider.cpp))
- [x] SliderBar ([header](include/SliderBar.h), [source](src/SliderBar.cpp))
- [x] Spinner ([header](include/Spinner.h), [source](src/Spinner.cpp))
- [x] StatusBar ([header](include/StatusBar.h), [source](src/StatusBar.cpp))
- [x] TabBar ([header](include/TabBar.h), [source](src/TabBar.cpp))
- [x] TextBox ([header](include/TextBox.h), [source](src/TextBox.cpp))
- [ ] TextInputBox ([header](include/TextInputBox.h), [source](src/TextInputBox.cpp))
- [x] Toggle ([header](include/Toggle.h), [source](src/Toggle.cpp))
- [x] ToggleGroup ([header](include/ToggleGroup.h), [source](src/ToggleGroup.cpp))
- [x] ValueBox ([header](include/ValueBox.h), [source](src/ValueBox.cpp))
- [x] WindowBox ([header](include/WindowBox.h), [source](src/WindowBox.cpp))

## More info

For more information about raygui, visit the [official raygui repository](https://github.com/raysan5/raygui).

## License

Raygui-cpp is licensed under zlib/libpng license, same as raygui. See [LICENSE.txt](LICENSE.txt) for more information.

## Author

Raygui-cpp is developed by:

- [Samuel Castrillo](https://github.com/scastd)
