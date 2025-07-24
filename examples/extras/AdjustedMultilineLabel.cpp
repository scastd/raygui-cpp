#include "raygui-cpp/extras/AdjustedMultilineLabel.h"


#include <raygui-cpp.h>

//------------------------------------------------------------------------------------
// Program main entry point
//------------------------------------------------------------------------------------
int main() {
    // Initialization
    //--------------------------------------------------------------------------------------
    const int screenWidth = 800;
    const int screenHeight = 600;

    InitWindow(screenWidth, screenHeight, "raygui-cpp - AdjustedMultilineLabel Example");

    // Define multiline text samples
    const char *singleLineText = "This is a single line of text.";
    const char *multiLineText = "This is the first line.\nThis is the second line.\nAnd this is a longer third line to show width adjustment.";
    const char *mixedText = "Short\nA much longer line that will determine the width\nShort again\nFinal line";

    // Create different examples of AdjustedMultilineLabel
    auto label1 = rgc::AdjustedMultilineLabel(rgc::Bounds(50, 50, 0, 0), singleLineText);
    auto label2 = rgc::AdjustedMultilineLabel(rgc::Bounds(50, 100, 0, 0), multiLineText);
    auto label3 = rgc::AdjustedMultilineLabel(rgc::Bounds(50, 220, 0, 0), mixedText);
    auto label4 = rgc::AdjustedMultilineLabel(rgc::Bounds(50, 350, 0, 0), "Simple multiline:\nSecond line\nThird line");

    // Create a label that will change text dynamically
    auto dynamicLabel = rgc::AdjustedMultilineLabel(rgc::Bounds(400, 50, 0, 0), "Click button to change text");

    // Button to change text
    auto changeTextButton = rgc::Button(rgc::Bounds(400, 150, 150, 30), "Change Text");

    // Text options for dynamic example
    const char* textOptions[] = {
        "Short text",
        "Multiple\nLines\nOf\nText",
        "A very long single line that demonstrates width adjustment",
        "Mixed:\nShort\nA very long line in the middle\nShort again"
    };
    int currentTextIndex = 0;

    SetTargetFPS(60);

    // Main game loop
    while (!WindowShouldClose()) {
        // Update
        //----------------------------------------------------------------------------------

        // Handle button click to change text
        if (changeTextButton.Show(true)) {
            currentTextIndex = (currentTextIndex + 1) % 4;
            dynamicLabel.SetText(textOptions[currentTextIndex]);
        }

        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();

        ClearBackground(RAYWHITE);

        // Draw labels
        label1.Show(false);
        label2.Show(false);
        label3.Show(false);
        label4.Show(false);
        dynamicLabel.Show(false);

        // Draw bounding boxes to visualize the dynamic sizing
        DrawRectangleLines((int)label1.GetBounds().GetX() - 2, (int)label1.GetBounds().GetY() - 2,
                          (int)label1.GetBounds().GetWidth() + 4, (int)label1.GetBounds().GetHeight() + 4, RED);

        DrawRectangleLines((int)label2.GetBounds().GetX() - 2, (int)label2.GetBounds().GetY() - 2,
                          (int)label2.GetBounds().GetWidth() + 4, (int)label2.GetBounds().GetHeight() + 4, BLUE);

        DrawRectangleLines((int)label3.GetBounds().GetX() - 2, (int)label3.GetBounds().GetY() - 2,
                          (int)label3.GetBounds().GetWidth() + 4, (int)label3.GetBounds().GetHeight() + 4, GREEN);

        DrawRectangleLines((int)label4.GetBounds().GetX() - 2, (int)label4.GetBounds().GetY() - 2,
                          (int)label4.GetBounds().GetWidth() + 4, (int)label4.GetBounds().GetHeight() + 4, PURPLE);

        DrawRectangleLines((int)dynamicLabel.GetBounds().GetX() - 2, (int)dynamicLabel.GetBounds().GetY() - 2,
                          (int)dynamicLabel.GetBounds().GetWidth() + 4, (int)dynamicLabel.GetBounds().GetHeight() + 4, ORANGE);

        // Draw info text
        DrawText("AdjustedMultilineLabel automatically adjusts its size based on text content", 10, 10, 20, DARKGRAY);
        DrawText("Uses default GUI font size and no margins for simplicity", 10, 30, 16, DARKGRAY);
        DrawText("Colored rectangles show the dynamic bounds for each label", 10, screenHeight - 60, 16, DARKGRAY);
        DrawText("Red: Single line | Blue: Multi-line | Green: Mixed content", 10, screenHeight - 40, 16, DARKGRAY);
        DrawText("Purple: Simple multiline | Orange: Dynamic text (click button)", 10, screenHeight - 20, 16, DARKGRAY);

        EndDrawing();
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseWindow();

    return 0;
}
