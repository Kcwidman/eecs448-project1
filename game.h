#ifndef GAME_H
#define GAME_H
#include"player.h"
#include<iostream>

///game is where most of the other classes interact and does the heavy lifting.
///
///This class is the most vital class to the project. It will take in its own parameters as well as use parts of the player, board and ship classes.
///Throughout the class many values for the game to progress will be created stored and used. This main logic is stored here.

class game
{
    private:
    bool m_gameOver;//true if a winner has been declared
    std::string m_clearScreenString;
    int m_tempX;
    int m_tempY;

    public:
    player* m_player1;//a pointer, since player has to be created at runtime and has a dynamic constructor
    player* m_player2;
    game();
    ~game();
    void play();//the main game loop
    void testPlay();//runs the game but skips the set up to speed up testing
    void setUp();//get the names of the players and place their ships
        void setUpIO();//takes in the player being modified, gets the names of the a player and their number of ships
        void shipIO(player* p);//takes in the player being modified, allows the user to place their ships
    void fullTurn();//a full turn occurs after both players finish their turn
        void turnIO(player* p);//takes in the player being modified, gathers the input for a half turn, sets m_shotX and m_shotY, prints full board
    void closingScreen();//after a winner has been determined, print a closing screen stating the winner
    void clearScreen();//prints 70 "\n"'s to clear the screen
    void switchPlayerPrompt();//waits to press enter before switching players
    void finishSetUpPrompt();//lets the users know set up is complete and the battle is beginning
};
#endif
