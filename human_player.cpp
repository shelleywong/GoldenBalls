#include <iostream>
#include human_player.h
using namespace std;
HumanPlayer::HumanPlayer() {
  pdecision = undefined;
  pstatus = 0;
}
HumanPlayer::HumanPlayer( decision type, unsigned status ) {
  pdecision = type;
  status = pstatus;
}
unsigned HumanPlayer::get_
