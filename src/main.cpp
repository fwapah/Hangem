#include "fileio.h"
#include "player.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    fileIO dictFile( "dictionary.txt", 1 ); // OPEN FILE

    string* words = dictFile.Getwords(); // GET THE WORDS

    for ( int i = 0; i < dictFile.GetnumWords( ); i++ ) // GO THROUGH AND PRINT THE WORDS
    {
        cout << words[i] << "\n";
    }

    player player1; // CREATE PLAYER

    char guess = player1.Getguess( ); // GET GUESS
    char* playerName = player1.GetplayerName( ); // GET PLAYER NAME

    cout << "\n" << playerName << " guessed: " << guess << "\n";

    player1.addWin( ); // ADD A WIN

    cout << "\nYou've won " << player1.GetWins( ) << " games.\n";

    // PAUSE

    char ch;
    cout << "\n\nPress q and then hit enter to quit.\n";
    cin >> ch;

    return 0;
}
