// Register.h
#ifndef HPLAYER_H_
#define HPLAYER_H_

class HumanPlayer {
  public:
    HumanPlayer();
    HumanPlayer( decision type, unsigned status )
    decision getType() const;  
    unsigned get_name() const;
  private:
    decision pdecision;
    unsigned pstatus;
};
#include "human_player.cpp"
#endif
