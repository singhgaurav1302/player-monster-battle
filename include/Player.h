#ifndef PLAYER_H_
#define PLAYER_H_

#include <string>

#include "Character.h"

class Player : public Character
{
public:
    Player(int initialHealth, int attackPower);
    ~Player();
};

#endif //PLAYER_H_