#include <iostream>
#include <raygui-cpp.h>

int main() {
    SetConfigFlags(FLAG_WINDOW_RESIZABLE); // To test the position update
    InitWindow(800, 450, "raygui example - basic window");
    SetTargetFPS(60);

    const auto buttonText1 = "Change position";
    const auto buttonText2 = "I change position";
    auto button1 = rgc::Button(rgc::Bounds::WithText(buttonText1, 22, { 15, 15 }), buttonText1);
    button1.SetStyle(rgc::Style(rgc::Style::Position::CENTER, { -100, 0 }));

    auto button2 = rgc::Button(rgc::Bounds::WithPositionAndText( 100, 20, buttonText2, 22, { 15, 15 }), buttonText2);

    bool switchPositionButton2 = false;

    // Set the button on click event callback
    button1.OnClick([&switchPositionButton2, buttonText2, &button2] {
        std::cout << "Clicked!" << std::endl;

        if (switchPositionButton2) {
            button2.SetBounds(rgc::Bounds::WithPositionAndText( 100, 20, buttonText2, 22, { 15, 15 }));
            switchPositionButton2 = false;
        } else {
            button2.SetBounds(rgc::Bounds::WithPositionAndText( 100, 320, buttonText2, 22, { 15, 15 }));
            switchPositionButton2 = true;
        }
    });

    // Main game loop
    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);

        button1.Update();
        button2.Update();
        RAYGUI_CPP_UNUSED(button1.Show());
        RAYGUI_CPP_UNUSED(button2.Show());

        EndDrawing();
    }

    CloseWindow();
    return 0;
}
