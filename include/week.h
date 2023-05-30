#ifndef WEEK_H_
#define WEEK_H_

#include "general.h"
#include "game.h"
#include "player.h"

class Week{
private:
    vector<Game> games;
    map<Player*, bool> injured;
    map<Player*, bool> yellowCardRecieved;
    map<Player*, bool> redCardRecieved;
    map<Player*, int> playerScore;
};

#endif // WEEK_H_
