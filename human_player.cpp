#include <iostream>
#include human_player.h
using namespace std;
Human_Player::Human_Player() {}
Human_Player::Human_Player(string name) {
    _name = undefined;
}
string Human_Player::set_name( string name ) const {
    cout<<"Enter the name";
    cin>> name;
   _name = name;
}
Human_Player::Decision Human_Player::split_or_steal( Decision deal ) const {
    return deal;
}
string Human_Player::get_name() const {
  return _name;
}
