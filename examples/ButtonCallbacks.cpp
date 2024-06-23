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
    auto button1 = rgc::Button(rgc::Bounds::WithText(buttonText, 22, { 15, 15 }), buttonText);
    button1.SetStyle(rgc::Style(rgc::Style::Position::CENTER, { -100, 0 }));

    auto button2 = rgc::Button(rgc::Bounds::WithText(buttonText, 22, { 15, 15 }), buttonText);
    button2.SetStyle(rgc::Style(rgc::Style::Position::CENTER, { 100, 0 }));

    button1.OnClick([&button1, &button2]() {
        TraceLog(LOG_INFO, "Button 1 clicked!");
        button1.Disable();
        button2.Enable();
    });
    button2.OnClick([&button1, &button2]() {
        TraceLog(LOG_INFO, "Button 2 clicked!");
        button1.Enable();
        button2.Disable();
    });

    button1.Enable();
    button2.Disable();
    // NOTE: the update callback is commented out because it outputs a message every frame, and it's annoying.
    // button.OnUpdate([]() {
    //     TraceLog(LOG_INFO, "Button updated!");
    // });

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
        button1.Update();
        button1.Show();
        button2.Update();
        button2.Show();

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
