#include <iostream>
#include human_player.h
using namespace std;
HumanPlayer::HumanPlayer() {
  pname = undefined;
}
//Determine the type of the player
void HumanPlayer::set_name() const {
   return pname;
}
unsigned HumanPlayer::split_or_steal() const {
  pname = name;
}
string HumanPlayer::get_name() const {
  return pname;
}
