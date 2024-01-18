#include "game.h"
#include<iostream>
using namespace std;

void Game::printGameResult()

{
     cout<<"You guessed the correct number = "<<randomNumber<<" with "<<numOfGuesses<<" guesses"<<endl;
}



Game::Game(int)

{
    srand(time(0));
    maxnumber = 10;
    cout<<"GAME DESTRUCTOR: object initialized with "<<maxnumber<<" as a maximum value"<<endl;
    randomNumber = rand() %maxnumber;
}



Game::~Game()

{
    cout<<"GAME DESTRUCTOR: object cleared from stack memory"<<endl;
}



void Game::play()

{
    while(playerGuess != randomNumber){
        cout<<"Give your guess between 1-" <<maxnumber<<endl;
        cin>>playerGuess;

        if(playerGuess < randomNumber){
            cout<<"Your guess is too small"<<endl;
        }
        else if(playerGuess > randomNumber){
            cout<<"Your guess is too big"<<endl;
        }
        else if(playerGuess == randomNumber){
            numOfGuesses++;
            printGameResult();
        }
        numOfGuesses++;
    }
}
