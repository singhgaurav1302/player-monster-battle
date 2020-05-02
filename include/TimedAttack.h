#ifndef TIMED_ATTACK_H_
#define TIMED_ATTACK_H_

#include <iostream>
#include <thread>
#include <chrono>

#include "Character.h"

template <typename T>
class TimedAttack
{
    std::thread thread_;
    int interval_;

public:
    TimedAttack(int interval, Character& opponent) : interval_ {interval}
    {        
        std::cout << static_cast<T*>(this)->getName() << " created" << std::endl;
        thread_ = std::thread(&TimedAttack::runLoop, this, std::ref(opponent));
    }

    ~TimedAttack()
    {
        thread_.join(); 
    }

    void runLoop(Character& opponent)
    {
        std::cout << "Timed thread id: " << std::this_thread::get_id() << std::endl; 
        while (true)
        {
            std::this_thread::sleep_for(std::chrono::milliseconds(interval_));
            if (static_cast<T*>(this)->isAlive() && opponent.isAlive())
            {
                static_cast<T*>(this)->attackOpponent(opponent);
            }
            else
            {
                break;
            }    
        }
    }
};

#endif //TIMED_ATTACK_H_