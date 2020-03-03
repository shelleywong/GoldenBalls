/*
 * @file    Game.cpp - Game Class implementation
 *
 * @author  Shelley Wong, Nomaan Faiyaz Shaikh, Pratiksha Kapse
 * @date March 2020
 */
#include "Game.h"
#include <iostream>
using std::cout;
using std::endl;

Game::Game(){
  cout<<"Welcome to Golden Balls"<<endl;
}

list<Player*> Game::Game(game_type Game_Type){
  Player* Player_1;
  Player* Player_2;
  switch(Game_Type){
    case "single":
      Player_1.set_name("Name 1");
      Player_2.set_name("Computer");
      break;
    case "dual":
      Player_1.set_name("Name 1");
      Player_2.set_name("Name 2");
      break;
  }
  _players.push_back(Player_1);
  _players.push_back(Player_2);
  return _players;
}
