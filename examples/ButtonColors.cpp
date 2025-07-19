#include <iostream>
#include <raygui-cpp.h>

int main() {
    SetConfigFlags(FLAG_WINDOW_RESIZABLE); // To test the position update
    InitWindow(800, 450, "raygui example - basic window");
    SetTargetFPS(60);

    const auto buttonText1 = "Switch colors";
    const auto buttonText2 = "I change colors";
    auto button1 = rgc::Button(rgc::Bounds::WithText(buttonText1, 22, { 15, 15 }), buttonText1);
    button1.SetStyle(rgc::Style(rgc::Style::Position::CENTER, { -100, 0 }));

    auto button2 = rgc::Button(rgc::Bounds::WithText(buttonText2, 22, { 15, 15 }), buttonText2);
    button2.SetStyle(rgc::Style(rgc::Style::Position::CENTER, { 100, 0 }));

    bool switchColorButton2 = false;
    button2.SetBaseColor(GOLD);

    // Set the button on click event callback
    button1.OnClick([&switchColorButton2, &button2] {
        std::cout << "Clicked!" << std::endl;

        if (switchColorButton2) {
            button2.SetBaseColor(GOLD);
            switchColorButton2 = false;
        } else {
            button2.SetBaseColor(PURPLE);
            switchColorButton2 = true;
        }
    });

    // Main game loop
    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);

        button1.Update();
        button2.Update();
        RAYGUI_CPP_UNUSED(button1.Show(true));
        RAYGUI_CPP_UNUSED(button2.Show(true));

        EndDrawing();
    }

    CloseWindow();
    return 0;
}
