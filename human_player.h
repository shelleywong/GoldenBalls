// Register.h
#ifndef HPLAYER_H_
#define HPLAYER_H_

class HumanPlayer {
  public:
    HumanPlayer();
    playerType set_name() const;  
    decision split_or_steal() const;
    string get_name() const;
  private:
    string pname;
    enum Decision { steal, split }
};
#include "human_player.cpp"
#endif
