// Register.h
#ifndef HPLAYER_H_
#define HPLAYER_H_

class HumanPlayer {
  public:
    HumanPlayer();
    void set_name() const;  
    Decision split_or_steal() const;
    string get_name() const;
  private:
    string _name;
    enum Decision { steal, split }
};
#include "human_player.cpp"
#endif
