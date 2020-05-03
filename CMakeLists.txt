cmake_minimum_required(VERSION 3.0)
project(Player_Dragon_Battle)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/bin)
include_directories(include)
file(GLOB SOURCES src/*.cpp)

add_executable(battle_game ${SOURCES})
target_link_libraries(battle_game pthread)
