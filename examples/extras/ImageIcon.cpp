#include "raygui-cpp/extras/ImageIcon.h"


#include <iostream>
#include <raygui-cpp.h>

int main() {
    SetConfigFlags(FLAG_WINDOW_RESIZABLE); // To test the position update
    InitWindow(800, 450, "raygui example - basic window");
    SetTargetFPS(60);

    const auto imageTexture = LoadTexture("assets/TestImage.png");
    auto imageIcon = rgc::ImageIcon(imageTexture);
    imageIcon.SetStyle(rgc::Style(rgc::Style::Position::CENTER, { 0, 0 }));

    // Set the button on click event callback
    imageIcon.OnClick([] {
        std::cout << "Clicked!" << std::endl;
    });

    // Main game loop
    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(GRAY);

        imageIcon.Update();
        RAYGUI_CPP_UNUSED(imageIcon.Show(true));

        EndDrawing();
    }

    CloseWindow();
    return 0;
}
