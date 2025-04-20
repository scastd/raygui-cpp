#include <iostream>
#include <raygui-cpp.h>

int main() {
    SetConfigFlags(FLAG_WINDOW_RESIZABLE); // To test the position update
    InitWindow(800, 450, "raygui example - basic window");
    SetTargetFPS(60);

    const auto buttonText = "Click me!";
    auto button = rgc::Button(rgc::Bounds::WithPositionAndText(300, 20, buttonText, 22, { 15, 15 }), buttonText);

    // Set the button on click event callback
    button.OnClick([] {
        std::cout << "Clicked!" << std::endl;
    });

    // Main game loop
    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);

        button.Update();
        RAYGUI_CPP_UNUSED(button.Show());

        EndDrawing();
    }

    CloseWindow();
    return 0;
}
