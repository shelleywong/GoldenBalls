#ifndef COMPUTER_PLAYER_H_
#define COMPUTER_PLAYER_H_

#include<iostream>
#include<string>
#include "Player.h"

using namespace std;

class Computer_Player : public Player{
	private:
		string _name = "Computer";

	public:
		void set_name(string name);
		int split_or_steal();
		string get_name();
};
#endif