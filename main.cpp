#include <iostream>
#include "BoardGame_Classes.h"
#include "3x3X_O.h"
#include "FiveX_O.h"
#include "PyramidX_O.h"
#include "InverseX_O.h"
#include "WordX_O.h"

using namespace std;

int main() {
    int choice;
    Player<char>* players[2];
    Board<char>* B = new InverseX_O_Board<char>();
    string playerXName, player2Name;

    cout << "Welcome to FCAI X-O Game. :)\n";

    // Set up player 1
    cout << "Enter Player X name: ";
    cin >> playerXName;
    cout << "Choose Player X type:\n";
    cout << "1. Human\n";
    cout << "2. Random Computer\n";
    cin >> choice;

    switch(choice) {
        case 1:
            players[0] = new InverseX_O_Player<char>(playerXName, 'X');
            break;
        case 2:
            players[0] = new InverseX_O_Random_Player<char>('X');
            break;
        default:
            cout << "Invalid choice for Player 1. Exiting the game.\n";
            return 1;
    }

    // Set up player 2
    cout << "Enter Player 2 name: ";
    cin >> player2Name;
    cout << "Choose Player 2 type:\n";
    cout << "1. Human\n";
    cout << "2. Random Computer\n";
    cin >> choice;

    switch(choice) {
        case 1:
            players[1] = new InverseX_O_Player<char>(player2Name, 'O');
            break;
        case 2:
            players[1] = new InverseX_O_Random_Player<char>('O');
            break;
        default:
            cout << "Invalid choice for Player 2. Exiting the game.\n";
            return 1;
    }

    // Create the game manager and run the game
    GameManager<char> X_0_game(B, players);
    X_0_game.run();

    // Clean up
    delete B;
    for (int i = 0; i < 2; ++i) {
        delete players[i];
    }

    return 0;
}



