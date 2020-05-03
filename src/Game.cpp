#include <iostream>
#include <algorithm>
#include <cassert>

#include "Game.h"
#include "Orc.h"
#include "Player.h"
#include "Dragon.h"


Game::Game()
{
}
    
Game::~Game()
{
}

void Game::init()
{
    players_.push_back(Player(40, 2));
    enemies_.push_back(Orc(7, 1, 1300));
    enemies_.push_back(Dragon(20, 3, 2600));
}

void Game::play()
{
    startEnemyAttack();
    
    auto player = std::begin(players_);
    while ((player != std::end(players_)) && player->isAlive())
    {
        if (std::none_of(std::begin(enemies_), std::end(enemies_), 
                [](const auto& o){ return o.isAlive(); }))
        {
            std::cout << "Player wins" << std::endl;
            break;
        }

        std::cout << "Attack enemy:\n1. Orc\n2. Dragon" << std::endl;
        std::cout << "Please choose enemy to be attacked: ";
        
        int choice = 0;
        std::cin >> choice;

        switch (choice)
        {
            case 1:
                player->attackOpponent(getEnemyByName("Orc"));
                break;
            case 2:
                player->attackOpponent(getEnemyByName("Dragon"));
                break;
            default:
                std::cout << "Wrong option selecetd." << std::endl;
        }
    }

    if ((player != std::end(players_)) && !player->isAlive())
    {
        std::cout << "Player lost" << std::endl;
    }
}

void Game::startEnemyAttack()
{
    auto player = std::begin(players_);
    if (player == std::end(players_))
    {
        return;
    }
    
    for (auto& e : enemies_)
    {
        e.attackOpponent(*player);
    }
}

std::vector<Character>& Game::getPlayers()
{
    return players_;
}

std::vector<Enemy>& Game::getEnemies()
{
    return enemies_;
}

void Game::printScoreCard()
{
    for (auto& player : players_)
    {
        std::cout << player.getName() << " score is: " << player.getHealth() << std::endl;
    }
    
    for (auto& enemy : enemies_)
    {
        std::cout << enemy.getName() << " score is: " << enemy.getHealth() << std::endl;
    }
}