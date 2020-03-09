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
using std::cin;

Game_Type select_game_type()
{
    int choice;
    do{
        cout << "1. Press 1 for Single Player" << endl
             << "2. Press 2 for Dual Player" << endl;
        cin >> choice;

        if( choice != 1 && choice != 2 )
        {
            std::cout<<"Please choose 1 or 2\n";
        }
    }while( choice != 1 && choice != 2 );

    if( choice == 1 )
    {
        return Game_Type::single;
    }
    else{
        return Game_Type::dual;
    }
}

void show_records()
{
    Records display = Records::instance();
    display.show_records();
}

int get_menu_choice()
{
    int G_Menu;
    
    do
    {
        cout << "1. Press 1 to play the game" << endl
             << "2. Press 2 to see records" << endl
             << "3. Press 3 to quit" << endl;

        
        cin >> G_Menu;

        if( G_Menu < 1 || G_Menu > 3)
        {
            cout<<"You have entered an incorrect entry."<<endl; 
        }
    }while( G_Menu < 1 || G_Menu > 3);

    return G_Menu;
}

int main()
{
    int choice;
    bool quit = false;
    Game* game;

    do{
        choice = get_menu_choice();
    
        Game_Type type;
        switch (choice)
        {
            case 1:
                type = select_game_type();
                game = new Game(type);
                break;

            case 2:
                show_records();
                break;
            
            case 3:
                quit = true;
                break;
        }
    }while( !quit );

    return 0;
}
