#ifndef DRAGON_H_
#define DRAGON_H_

#include "Character.h"
#include "TimedAttack.h"

class Dragon : public Character, public TimedAttack<Dragon>
{
public:
    Dragon(int initialHealth, int attackPower, int interval, Character& opponent);
    ~Dragon();
};

#endif //DRAGON_H_