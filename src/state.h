#pragma once

enum states {
    MENU,
    GAME,
    GAMEOVER
};

void switchState(states state);

void state_update();