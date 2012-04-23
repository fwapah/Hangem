#include "fileio.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

fileIO::fileIO( char* src, bool debug = 0 )
{
    filePath = src;
    if ( debug ) cout << "Opening file path: " << filePath << "\n";
    ifstream wordFile( filePath );
    int i = 0;
    string temp;

    if ( wordFile.is_open( ))
    {
        if ( debug ) cout << "\n\nFile contents are...\n\n";
        while ( wordFile.good( ) )
        {
            getline( wordFile, temp );
            if ( debug ) cout << temp << "\n";
            i += 1;
        }

        numWords = i;
        words = new string[ numWords ];
        i = 0;

        wordFile.close( );
        wordFile.open( filePath, ifstream::in );

        while ( wordFile.good( ) )
        {
            getline( wordFile, words[i] );
            i += 1;
        }
        if ( debug ) cout << "\n\nClosing file...\n\n";
        wordFile.close( );
    }

    else
    {
        if ( debug ) cout << "\n\nERROR: Unable to open file! Is the path correct?\n\n";
    }
}

fileIO::~fileIO()
{
    delete words;
}
