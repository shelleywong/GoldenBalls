/*  
	main.cpp by Subhed Chavan, Jayesh Sathe, Gopal Raigoni @ Chico State
    Github @subhed @Jayesh-sathe @gopalsingh112
    CSCI-630 
*/

#include <iostream>
#include "Game_Type.h"
// #include "human_player.h"
// #include "Computer_Player.h"
// #include "Records.h"

using namespace std;

int main()
{

    Game_Type GT;

    int G_Type;
    cin >> G_Type;

    switch (G_Type)
    {
    case 1:
        GT = Game_Type::single;
        break;

    case 2:
        GT = Game_Type::dual;
        break;

    default:
        break;
    }

    return 0;
}
