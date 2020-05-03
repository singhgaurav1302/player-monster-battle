#include <iostream>
#include <thread>
#include <chrono>

#include "Character.h"
#include "Game.h"

void test()
{
    Game game;
    game.init();
    game.startEnemyAttack();

    auto players = game.getPlayers();
    auto player = std::begin(players);

    int iterations = 10;
    while ((player != std::end(players)) && player->isAlive() && iterations-- > 0)
    {
        //it takes 8 * 2600 milliseconds to kill player
        //4 turns to kill Orc and 
        //10 turns to kill Dragon

        std::this_thread::sleep_for(std::chrono::milliseconds(2600));
        player->attackOpponent(game.getEnemyByName("Orc"));
        player->attackOpponent(game.getEnemyByName("Dragon"));
    }

    game.printScoreCard();
    if (player->isAlive())
    {
        std::cout << "Test Passed" << std::endl;
    }
    else
    {
        std::cout << "Test Failed" << std::endl;    
    }   
}

int main()
{
    //test();
    Game game;
    game.init();
    game.play();
}