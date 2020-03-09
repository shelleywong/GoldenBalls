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
#include "Records.h"
#include <iostream>
using std::cout;
using std::endl;

Game::Game(){
  cout<<"Welcome to Golden Balls"<<endl;
}

/*
 * @brief             Plays the game and changes records of all players
 * @param Game_Type   Determines if game is single (human vs computer)
 *                    or dual (human vs human)
 *
 * Play the single or dual version of the Golden Balls game. Game sets the
 * players' names and the players' choice (split or steal). Then the winner
 * is determined (4 possible cases) and the records are updated.
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

  // Decide who won and update records
  if(decision_list[0] == "steal" && decision_list[1] == "steal"){
    Records::instance()->update_record(_players[0]->get_name(), 0);
    Records::instance()->update_record(_players[1]->get_name(), 0);
  }
  else if(decision_list[0] == "split" && decision_list[1] == "steal"){
    Records::instance()->update_record(_players[0]->get_name(), 1);
    Records::instance()->update_record(_players[1]->get_name(), 0);
  }
  else if(decision_list[0] == "steal" && decision_list[1] == "split"){
    Records::instance()->update_record(_players[0]->get_name(), 0);
    Records::instance()->update_record(_players[1]->get_name(), 1);
  }
  else{
    Records::instance()->update_record(_players[0]->get_name(), 1);
    Records::instance()->update_record(_players[1]->get_name(), 1);
  }
}
