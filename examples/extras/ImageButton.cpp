#include <iostream>
#include <raygui-cpp.h>

int main() {
    SetConfigFlags(FLAG_WINDOW_RESIZABLE); // To test the position update
    InitWindow(800, 450, "raygui example - basic window");
    SetTargetFPS(60);

    const auto imageTexture = LoadTexture("assets/TestImage.png");
    auto centerCenterButton = rgc::ImageButton(rgc::Bounds::OfSize(256, 256), imageTexture);
    centerCenterButton.SetStyle(rgc::Style(rgc::Style::Position::CENTER, { 0, 0 }));

    // Set the button on click event callback
    centerCenterButton.OnClick([] {
        std::cout << "Clicked!" << std::endl;
    });

    // Main game loop
    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(GRAY);

        centerCenterButton.Update();
        RAYGUI_CPP_UNUSED(centerCenterButton.Show());

        EndDrawing();
    }

    CloseWindow();
    return 0;
}
