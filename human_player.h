// Register.h
#include<string.h>

#ifndef HPLAYER_H_
#define HPLAYER_H_

class HumanPlayer {
  private:
    string name;
    enum decision {steal, split}
  public:
    void set_name();
    unsigned get_name();
    decision SplitOrSteal();    
};
#include "human_player.cpp"
#endif
