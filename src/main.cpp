#include "fileio.h"
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

    // PAUSE

    char ch;

    cout << "\n\nPress q and then hit enter to quit.\n";

    cin >> ch;

    return 0;
}
