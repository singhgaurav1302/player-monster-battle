#include "Dragon.h"

Dragon::Dragon(int initialHealth, int attackPower, int interval)
    : Enemy("Dragon", initialHealth, attackPower, interval)
{
}

Dragon::~Dragon()
{
}
