#ifndef ORC_H_
#define ORC_H_

#include "Character.h"
#include "TimedAttack.h"

class Orc : public Character, public TimedAttack<Orc>
{
public:
    Orc(int initialHealth, int attackPower, int interval, Character& opponent);
    ~Orc();
};

#endif //ORC_H_