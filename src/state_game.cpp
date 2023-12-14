#include "state_game.h"

#include "state.h"

void state_menu_init() {

}

void state_game_update() {
    if (IsKeyPressed(KEY_SPACE)) {
        state_game_leave();
        switchState(GAMEOVER);
    }
}

void state_game_draw() {
    BeginDrawing();

    ClearBackground(WHITE);

    const char *text = "This is the game screen";
    int fontSize = 30;

    float textWidth = MeasureText(text, fontSize);
    float centerX = (GetScreenWidth() - textWidth) / 2;

    DrawText(text, centerX, 10, fontSize, LIGHTGRAY);

    EndDrawing();
}

void state_game_leave() {

}