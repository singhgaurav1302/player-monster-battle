#include "Orc.h"

Orc::Orc(int initialHealth, int attackPower, int interval, Character& opponent)
    : Character("Orc", initialHealth, attackPower)
    , TimedAttack(interval, opponent)
{
}

Orc::~Orc()
{
}