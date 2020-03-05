/*  
	main.cpp by Subhed Chavan, Jayesh Sathe, Gopal Raigoni @ Chico State
    Github @subhed @Jayesh-sathe @gopalsingh112
    CSCI-630 
*/

#include <iostream>
#include "Game_Type.h"
#include "Human_Player.h"
#include "Computer_Player.h"
#include "Records.h"
#include "Game.h"

using namespace std;

Game_Type select_game_type()
{
    cout << "1. Press 1 for Single Player" << endl
         << "2. Press 2 for Dual Player" << endl;
    int G_Type;
    cin >> G_Type;

    label1 : switch (G_Type)
    {
    case 1:
        GT = Game_Type::single;
        return GT;
        break;

    case 2:
        GT = Game_Type::dual;
        return GT;
        break;

    default:
        goto label1;
        break;
    }
}

void show_records()
{
    Records display = Records::instance();
    display.show_records();
}

void show_menu()
{

    Game GM;

    cout << "1. Press 1 to play the game" << endl
         << "2. Press 2 to see records" << endl;

    int G_Menu;
    cin >> G_Menu;

    label : switch (G_Menu)
    {
    case 1:
        Game_Type GT = select_game_type();
        GM(GT);
        show_records();
        break;

    case 2:
        show_records();
        break;
    
    case 3:
        exit(0);

    default:
        cout<<"You have entered an incorrect entry."<<endl; 
        goto label;
        break;
    }
}

int main()
{
    show_menu();
    return 0;
}
