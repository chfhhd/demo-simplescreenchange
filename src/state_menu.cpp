#include "state_menu.h"

#include "state.h"

void state_game_init() {

}

void state_menu_update() {
    if (IsKeyPressed(KEY_SPACE)) {
        state_menu_leave();
        switchState(GAME);
    }
}

void state_menu_draw() {
    BeginDrawing();

        ClearBackground(WHITE);

        const char *text = "Press <SPACE> to start the game";
        int fontSize = 30;

        float textWidth = MeasureText(text, fontSize);
        float centerX = (GetScreenWidth() - textWidth) / 2;

        DrawText(text, centerX, 10, fontSize, LIGHTGRAY);

    EndDrawing();
}

void state_menu_leave() {

}