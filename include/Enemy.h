#ifndef ENEMY_H_
#define ENEMY_H_

#include "Character.h"

class Enemy : public Character 
{
    int interval_;

public:
    Enemy(const std::string& name, int initialHealth, int attackPower, int interval);
    ~Enemy();
    virtual void attackOpponent(Character& opponent) override;
};

#endif //ENEMY_H_