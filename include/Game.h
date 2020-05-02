#ifndef GAME_H_
#define GAME_H_

#include <vector>
#include <string>

class Character;
class Game
{
    std::vector<Character> players_;
    std::vector<Character> enemies_;

    inline Character& getEnemyByName(const std::string& name);

public:
    Game();
    ~Game();

    void init();
    void play();
};

#endif //GAME_H_