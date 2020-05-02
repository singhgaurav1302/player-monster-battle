#include "Dragon.h"

Dragon::Dragon(int initialHealth, int attackPower, int interval, Character& opponent)
    : Character("Dragon", initialHealth, attackPower)
    , TimedAttack(interval, opponent)
{
}

Dragon::~Dragon()
{
}