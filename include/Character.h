#ifndef CHARACTER_H_
#define CHARACTER_H_

#include <string>

class Character
{
    std::string name_;
    int health_;
    int attackPower_;

public:
    Character(const std::string& name, int health, int attackPower);
    virtual ~Character();

    virtual void attackOpponent(Character& opponent);

    bool isAlive() const;

    const std::string& getName() const;
    int getHealth() const;
};

#endif //CHARACTER_H_