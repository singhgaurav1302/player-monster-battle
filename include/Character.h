#ifndef CHARACTER_H_
#define CHARACTER_H_

#include <string>
#include <atomic>

class Character
{
    std::string name_;
    int health_;
    int attackPower_;

public:
    Character(const std::string& name, int health, int attackPower);
    virtual ~Character();

    void attackOpponent(Character& opponent);
    void reduceHealth();

    bool isAlive() const;

    const std::string& getName() const;
    int getHealth() const;
};

#endif //CHARACTER_H_