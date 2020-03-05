/*  
	main.cpp by Subhed Chavan, Jayesh Sathe, Gopal Raigoni @ Chico State
    Github @subhed @Jayesh-sathe @gopalsingh112
    CSCI-630 
*/

#include <iostream>
#include "Game_Type.h"
#include "human_player.h"
#include "Computer_Player.h"
#include "Records.h"

using namespace std;

Game_Type select_game_type()
{

    int G_Type;
    cin >> G_Type;

case 1:
    GT = Game_Type::single;
    return GT;
    break;

case 2:
    GT = Game_Type::dual;
    return GT;
    break;

default:
    break;
}

void show_menu()
{

    Records RD;
    Game GM;

    switch (G_Type)
    {
    case 1:
        Game_Type GT = select_game_type();
        GM(GT);
        break;

    case 2:
        RD.show_records();
        break;

    default:
        break;
    }
}

int main()
{
    show_menu();

    return 0;
}
