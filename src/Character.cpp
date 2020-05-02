#include <iostream>

#include "Character.h"

Character::Character(const std::string& name, int health, int attackPower)
    : name_ {name}
    , health_ {health}
    , attackPower_ {attackPower}
{
}

Character::~Character()
{
}

void Character::attackOpponent(Character& opponent)
{
    opponent.health_ = std::max(0, opponent.health_ - attackPower_);
    std::cout << name_ << " hits " << opponent.getName() << ". "; 
    std::cout << opponent.getName() << " health is: " << opponent.getHealth() << std::endl;
}
    
bool Character::isAlive() const
{
    return health_ > 0;
}

const std::string& Character::getName() const
{
    return name_;
}

int Character::getHealth() const
{
    return health_;
}