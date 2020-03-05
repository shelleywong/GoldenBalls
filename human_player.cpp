#include <iostream>
#include human_player.h
using namespace std;
HumanPlayer::HumanPlayer() {
  pname = undefined;
}
HumanPlayer::HumanPlayer(string name) {
    name = undefined;
}
void HumanPlayer::set_name() const {
   return pname;
}
unsigned HumanPlayer::split_or_steal() const {
  pname = name;
}
string HumanPlayer::get_name() const {
  return pname;
}
