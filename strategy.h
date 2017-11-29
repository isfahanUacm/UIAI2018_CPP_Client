#ifndef STRATEGY_H
#define STRATEGY_H
#include <iostream>
#include <vector>
#include "pos.h"
#include "player.h"
#include "triple.h"

using namespace std;

class Strategy
{
public:
    Strategy();
    static Player *Setup_players();
    static Triple do_turn();

};

#endif // STRATEGY_H