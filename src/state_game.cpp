#include "state_game.h"
#include "raylib.h"
#include "state.h"

Vector2 enemies[50];
Texture2D texture;

void state_game_init() {
    for (int i = 0; i < 50; i++) {
        enemies[i].x = GetRandomValue(0, GetScreenWidth() - texture.width);
        enemies[i].y = GetRandomValue(0, GetScreenHeight() - texture.height);
    }
    texture = LoadTexture("assets/graphics/testimage.png");
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

    for (Vector2 element: enemies) {
        DrawTexture(texture, (int) element.x, (int) element.y, WHITE);
    }

    /*const char *text = "This is the game screen";
    int fontSize = 30;


    float textWidth = MeasureText(text, fontSize);
    float centerX = (GetScreenWidth() - textWidth) / 2;

    DrawText(text, centerX, 10, fontSize, LIGHTGRAY);*/

    EndDrawing();
}

void state_game_leave() {

}