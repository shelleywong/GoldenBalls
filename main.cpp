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

using std::cout;
using std::endl;

Game_Type select_game_type()
{
    cout << "1. Press 1 for Single Player" << endl
         << "2. Press 2 for Dual Player" << endl;
    int G_Type;
    cin >> G_Type;

    do{
        switch (G_Type)
        {
        case 1:
            GT = Game_Type::single;
            return GT;

        case 2:
            GT = Game_Type::dual;
            return GT;

        default:
            std::cout<<"Please choose 1 or 2\n";
            break;
        }
    }while( G_Type != 1 && G_Type != 2 );
}

void show_records()
{
    Records display = Records::instance();
    display.show_records();
}

void show_menu()
{

    Game* game;

    cout << "1. Press 1 to play the game" << endl
         << "2. Press 2 to see records" << endl
         << "3. Press 3 to quit" << endl;

    int G_Menu;
    bool quit = false;
    cin >> G_Menu;

    do{
        switch (G_Menu)
        {
            case 1:
                Game_Type GT = select_game_type();
                game = new Game(GT);
                break;

            case 2:
                show_records();
                break;
            
            case 3:
                quit = true;

            default:
                cout<<"You have entered an incorrect entry."<<endl; 
                break;
        }
    }while( G_Menu < 1 || G_Menu > 3);

}

int main()
{
    show_menu();
    return 0;
}
