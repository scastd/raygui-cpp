#include <iostream>
#include <raygui-cpp.h>

int main() {
    SetConfigFlags(FLAG_WINDOW_RESIZABLE); // To test the position update
    InitWindow(800, 450, "raygui example - basic window");
    SetTargetFPS(60);

    const auto buttonText = "Click me!";
    auto centerCenterButton = rgc::Button(rgc::Bounds::WithText(buttonText, 22, { 15, 15 }), buttonText);
    centerCenterButton.SetStyle(rgc::Style(rgc::Style::Position::CENTER, { 0, 0 }));

    // Set the button on click event callback
    centerCenterButton.OnClick([] {
        std::cout << "Clicked!" << std::endl;
    });

    // Main game loop
    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);

        centerCenterButton.Update();
        RAYGUI_CPP_UNUSED(centerCenterButton.Show(true));

        EndDrawing();
    }

    CloseWindow();
    return 0;
}
