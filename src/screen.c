#include "rogue.h"

    MAX_HEIGHT = 25;
    MAX_WIDTH = 100;

int screenSetUp()
{
    initscr();
    noecho();
    keypad(stdscr, TRUE);
    refresh();

    srand(time(NULL));

    return 1;

}

int printGameHub(Level * level)
{
    mvprintw(25, 0, "    Level: %d", level->level);
    printw("    Gold: %d", level->user->gold);
    printw("    Hp: %d(%d)", level->user->health, level->user->maxHealth);
    printw("    Attack: %d", level->user->attack);
    printw("    Exp: %d", level->user->exp);
    printw("      ");

    return 1;
}