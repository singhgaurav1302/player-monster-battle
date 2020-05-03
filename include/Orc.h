#ifndef ORC_H_
#define ORC_H_

#include "Enemy.h"

class Orc : public Enemy
{
public:
    Orc(int initialHealth, int attackPower, int interval);
    ~Orc();
};

#endif //ORC_H_