#include "state_menu.h"
#include "state_game.h"
#include "state_gameover.h"

#include "state.h"

states gamestate = MENU;

void switchState(states state) {
    switch (gamestate) {
        case MENU:
            state_game_init();
            break;
        case GAME:
            state_menu_init();
            break;
        case GAMEOVER:
            state_gameover_init();
            break;
    }

    gamestate = state;
}

void state_update() {
    switch (gamestate) {
        case MENU:
            state_menu_update();
            state_menu_draw();
            break;
        case GAME:
            state_game_update();
            state_game_draw();
            break;
        case GAMEOVER:
            state_gameover_update();
            state_gameover_draw();
            break;
    }
}