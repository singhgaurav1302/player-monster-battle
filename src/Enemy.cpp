#include <thread>
#include <chrono>

#include "Enemy.h"

Enemy::Enemy(const std::string& name, int initialHealth, int attackPower, int interval)
    : Character(name, initialHealth, attackPower)
    , interval_ {interval}
{
}

Enemy::~Enemy()
{
}

void Enemy::attackOpponent(Character& opponent)
{
    std::thread t([&]() {
        while (true)
        {
            std::this_thread::sleep_for(std::chrono::milliseconds(interval_));
            if (isAlive() && opponent.isAlive())
            {
                Character::attackOpponent(opponent);
            }
            else
            {
                break;
            }  
        }
    });
    t.detach();
}
