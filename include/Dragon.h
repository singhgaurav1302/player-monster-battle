#ifndef DRAGON_H_
#define DRAGON_H_

#include "Enemy.h"

class Dragon : public Enemy
{
public:
    Dragon(int initialHealth, int attackPower, int interval);
    ~Dragon();
};

#endif //DRAGON_H_