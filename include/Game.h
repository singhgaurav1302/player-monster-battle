#ifndef GAME_H_
#define GAME_H_

#include <vector>
#include <string>
#include <cassert>
#include <algorithm>

#include "Enemy.h"
#include "Character.h"

class Character;
class Enemy;

class Game
{
    std::vector<Character> players_;
    std::vector<Enemy> enemies_;

public:
    Game();
    ~Game();

    void init();
    void play();
    void startEnemyAttack();
    void printScoreCard();

    inline Character& getEnemyByName(const std::string& name)
    {
        auto it = std::find_if(std::begin(enemies_), std::end(enemies_), 
                                [&](auto& o) { return !o.getName().compare(name);});

        assert(it != std::end(enemies_) && "Enemy with matching name not found");
    
        return *it;
    }
    std::vector<Character>& getPlayers();
    std::vector<Enemy>& getEnemies();
};

#endif //GAME_H_