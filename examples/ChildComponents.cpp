#include <raygui-cpp.h>

//------------------------------------------------------------------------------------
// Program main entry point
//------------------------------------------------------------------------------------
int main() {
    // Initialization
    //--------------------------------------------------------------------------------------
    const int screenWidth = 800;
    const int screenHeight = 450;

    SetConfigFlags(FLAG_WINDOW_RESIZABLE); // To test the position update
    InitWindow(screenWidth, screenHeight, "raygui example - basic window");

    // Load resources / Initialize variables at this point
    const char *buttonText = "Click me!";
    const rgc::Bounds &bounds = rgc::Bounds::WithText(buttonText, 22, { 15, 15 });
    auto topLeftButton = rgc::Button(bounds, buttonText);
    auto topCenterButton = rgc::Button(bounds, buttonText);
    auto bottomCenterButton = rgc::Button(bounds, buttonText);

    topLeftButton.SetStyle(rgc::Style(rgc::Style::Position::TOP_LEFT, { 15, 35 }));
    topCenterButton.SetStyle(rgc::Style(rgc::Style::Position::TOP_CENTER, { 0, 35 }));
    bottomCenterButton.SetStyle(rgc::Style(rgc::Style::Position::BOTTOM_CENTER, { 0, -5 }));

    auto smallWindowBox = rgc::WindowBox(rgc::Bounds({ 100, 100 }, { 200, 200 }), "Small Window Box");
    smallWindowBox.SetStyle(rgc::Style(rgc::Style::Position::CENTER_RIGHT, { -40, 0 }));

    auto bigWindowBox = rgc::WindowBox(rgc::Bounds({ 20, 20 }, { 600, 400 }), "Big Window Box");
    bigWindowBox.SetStyle(rgc::Style(rgc::Style::Position::CENTER, { 0, 0 }));

    // Ways for adding children to the window box
    // 1. Using verbose dynamic_cast
    bigWindowBox.AddChild(dynamic_cast<rgc::Component<bool> *>(&topLeftButton));
    // 2. Using the ToComponent function from Utils.h
    bigWindowBox.AddChild(rgc::ToComponent(&smallWindowBox));
    smallWindowBox.AddChild(rgc::ToComponent(&bottomCenterButton));
    smallWindowBox.AddChild(rgc::ToComponent(&topCenterButton));

    SetTargetFPS(60);
    //--------------------------------------------------------------------------------------

    // Main game loop
    while (!WindowShouldClose()) // Detect window close button or ESC key
    {
        // Update
        //----------------------------------------------------------------------------------
        // Update variables / Implement example logic at this point
        //----------------------------------------------------------------------------------
        bigWindowBox.Update();

        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();

        ClearBackground(RAYWHITE);

        // Draw everything that requires to be drawn at this point:
        bigWindowBox.Show();

        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------

    // Unload all loaded resources at this point

    CloseWindow(); // Close window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}
