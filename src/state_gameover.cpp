#include "state_gameover.h"

#include "state.h"

void state_gameover_init() {

}

void state_gameover_update() {
    if (IsKeyPressed(KEY_SPACE)) {
        state_gameover_leave();
        switchState(MENU);
    }
}

void state_gameover_draw() {
    BeginDrawing();

    ClearBackground(WHITE);

    const char *text = "GAME OVER";
    int fontSize = 30;

    float textWidth = MeasureText(text, fontSize);
    float centerX = (GetScreenWidth() - textWidth) / 2;

    DrawText(text, centerX, 10, fontSize, LIGHTGRAY);

    EndDrawing();
}

void state_gameover_leave() {

}