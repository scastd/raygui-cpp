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
    auto topLeftButton = rgc::Button(rgc::Bounds::WithText(buttonText, 22, { 15, 15 }), buttonText);
    auto topCenterButton = rgc::Button(rgc::Bounds::WithText(buttonText, 22, { 15, 15 }), buttonText);
    auto topRightButton = rgc::Button(rgc::Bounds::WithText(buttonText, 22, { 15, 15 }), buttonText);
    auto centerLeftButton = rgc::Button(rgc::Bounds::WithText(buttonText, 22, { 15, 15 }), buttonText);
    auto centerCenterButton = rgc::Button(rgc::Bounds::WithText(buttonText, 22, { 15, 15 }), buttonText);
    auto centerRightButton = rgc::Button(rgc::Bounds::WithText(buttonText, 22, { 15, 15 }), buttonText);
    auto bottomLeftButton = rgc::Button(rgc::Bounds::WithText(buttonText, 22, { 15, 15 }), buttonText);
    auto bottomCenterButton = rgc::Button(rgc::Bounds::WithText(buttonText, 22, { 15, 15 }), buttonText);
    auto bottomRightButton = rgc::Button(rgc::Bounds::WithText(buttonText, 22, { 15, 15 }), buttonText);
    topLeftButton.SetStyle(rgc::Style(rgc::Style::Position::TOP_LEFT, { 5, 5 }));
    topCenterButton.SetStyle(rgc::Style(rgc::Style::Position::TOP_CENTER, { 0, 5 }));
    topRightButton.SetStyle(rgc::Style(rgc::Style::Position::TOP_RIGHT, { -5, 5 }));
    centerLeftButton.SetStyle(rgc::Style(rgc::Style::Position::CENTER_LEFT, { 5, 0 }));
    centerCenterButton.SetStyle(rgc::Style(rgc::Style::Position::CENTER, { 0, 0 }));
    centerRightButton.SetStyle(rgc::Style(rgc::Style::Position::CENTER_RIGHT, { -5, 0 }));
    bottomLeftButton.SetStyle(rgc::Style(rgc::Style::Position::BOTTOM_LEFT, { 5, -5 }));
    bottomCenterButton.SetStyle(rgc::Style(rgc::Style::Position::BOTTOM_CENTER, { 0, -5 }));
    bottomRightButton.SetStyle(rgc::Style(rgc::Style::Position::BOTTOM_RIGHT, { -5, -5 }));

    SetTargetFPS(60);
    //--------------------------------------------------------------------------------------

    // Main game loop
    while (!WindowShouldClose()) // Detect window close button or ESC key
    {
        // Update
        //----------------------------------------------------------------------------------
        // Update variables / Implement example logic at this point
        //----------------------------------------------------------------------------------

        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();

        ClearBackground(RAYWHITE);

        // Draw everything that requires to be drawn at this point:

        topLeftButton.Update();
        topLeftButton.Show();
        topCenterButton.Update();
        topCenterButton.Show();
        topRightButton.Update();
        topRightButton.Show();
        centerLeftButton.Update();
        centerLeftButton.Show();
        centerCenterButton.Update();
        centerCenterButton.Show();
        centerRightButton.Update();
        centerRightButton.Show();
        bottomLeftButton.Update();
        bottomLeftButton.Show();
        bottomCenterButton.Update();
        bottomCenterButton.Show();
        bottomRightButton.Update();
        bottomRightButton.Show();

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
