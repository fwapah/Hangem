#include <string>
#include <iostream>
#include <stdio.h>

using namespace std;

#ifndef PLAYER_H
#define PLAYER_H


class player
{
    public:
        player();
        virtual ~player();
        char* GetplayerName() { return playerName; }
        char  Getguess();
        int   GetWins( ) { return wins; }
        int   GetLoses( ) { return loses; }
        void  addWin( );
        void  addLoses( );
    protected:
    private:
        char* playerName;
        char  guess;
        int   wins;
        int   loses;
};

#endif // PLAYER_H
