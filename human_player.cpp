#include <iostream>
#include human_player.h
using namespace std;
HumanPlayer::HumanPlayer() {}
HumanPlayer::HumanPlayer(string name) {
    _name = undefined;
}
void HumanPlayer::set_name( string name ) const {
   _name = name;
}
HumanPlayer::Decision HumanPlayer::split_or_steal( Decision deal ) const {
  if( deal == "split")
    return split;
  else 
    return steal;
}
string HumanPlayer::get_name() const {
  return pname;
}
