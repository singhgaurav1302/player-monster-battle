#include <thread>
#include "Game.h"
#include "Orc.h"
#include "Player.h"
#include "Dragon.h"

int main()
{
    std::cout << "thread id: " << std::this_thread::get_id() << std::endl;
    Game game;
    game.init();
    game.play();
}