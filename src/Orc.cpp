#include <thread>

#include "Orc.h"

Orc::Orc(int initialHealth, int attackPower, int interval)
    : Enemy("Orc", initialHealth, attackPower, interval)
{
}

Orc::~Orc()
{
}
