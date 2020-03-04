// Register.h
#ifndef HPLAYER_H_
#define HPLAYER_H_

class HumanPlayer {
  public:
    HumanPlayer();
    HumanPlayer( decision type, unsigned status )
    unsigned get_name() const;
    decision SplitOrSteal() const;  
  private:
    decision pdecision;
    unsigned pstatus;
};
#include "human_player.cpp"
#endif
