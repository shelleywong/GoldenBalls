/*
 * @file    Game.cpp - Game Class implementation
 *
 * @author  Shelley Wong, Nomaan Faiyaz Shaikh, Pratiksha Kapse
 * @date March 2020
 */
#include "Game.h"
#include "Human_Player.h"
#include "Computer_Player.h"
#include "Decision.h"
#include <iostream>
using std::cout;
using std::endl;

Game::Game(){
  cout<<"Welcome to Golden Balls"<<endl;
}

/*
 * Plays the game and changes records of all players
 */
void Game::Game(game_type Game_Type){
  // Set players based on Game Type
  switch(Game_Type){
    case "single":
      _players[0] = new Human_Player();
      _players[1] = new Computer_Player();
      break;
    case "dual":
      _players[0] = new Human_Player();
      _players[1] = new Human_Player();
      break;
  }

  // Set names of players based on Game Type
  // Players all choose to split or steal
  vector<Decision*> decision_list;
  for(int i = 0; i < _players.size(); i++){
    // Set player's name
    _players[i]->set_name();

    // Player makes decision
    decision_list[i] = _players[i]->split_or_steal();
  }

  // Decide who won


  // Update records

}
