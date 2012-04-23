#include <string>
#include <iostream>
#include <fstream>
using namespace std;

#ifndef FILEIO_H
#define FILEIO_H

class fileIO
{
    public:
        fileIO( char* src, bool debug );
        virtual ~fileIO();
        char* GetfilePath() { return filePath; }
        int GetnumWords( ) { return numWords; }
        string* Getwords( ) { return words; }
    protected:
    private:
        char* filePath;
        int numWords;
        string* words;
};

#endif // FILEIO_H
