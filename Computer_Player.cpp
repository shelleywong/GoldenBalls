#include "Computer_Player.h"

void Computer_Player :: set_name(string name){
	_name = name;
}

int Computer_Player :: split_or_steal()
{
	return 1;
}

string Computer_Player :: get_name(){
	return _name;
}

