/*********************************************************
Author: Damiane Kapanadze
Date Created: November 23, 2023
Description:
___________________________________________________
Assignment 3 – Computer Engineering Case Study – Iterated Prisoner's Dilemma
___________________________________________________
Simulate Iterated Prisoner's Dillema with different strategies
***********************************************************/
#include <iostream>
#include <string>
#include <random>
#define CC 3
#define DD 1
#define CD 0
#define DC 5

using namespace std;


class Player {
private:
    static int NumOfPlayers;
    int ID = 0;
    int score = 0;
    string moves = " ";
    int strategy = 0; // 1-good; 2-evil; 3- random; 4-tit for tat;
    Strategy S;
public:
    //Constructor
    Player(int i) {
        NumOfPlayers++;
        ID = NumOfPlayers;
        strategy = i;
        S.setStrategy(strategy);
      
    }

    //getters
    static int getNumOfPlayers() { return NumOfPlayers; }
    int getID() { return ID; }
    int getScore() { return score; }
    int getStrategy() { return strategy; }
    string printMoves() { return moves; }
    char getLastMove() { return moves[moves.length()-1]; }



    //setters
    void updateStrategy(const int i) { strategy = i; }
    void setLastMove(char c) { moves += c; }
    void addScore(int i) { score += i; }


    //memeber functions
    void makeMove(char oppLastMove) {
        //(based on the specific strategy and last players moves)
        setLastMove (S.cooperateOrDefect(oppLastMove));
    }

    /*
    //Destructor
    ~Player() {
        NumOfPlayers--;
    }
    */

};

class Strategy {
private :
    int strategy = 0; // 1-good; 2-evil; 3- random; 4-tit for tat; 

    //memeber functinos
    char Good() { return 'c'; }
    char Evil() { return 'd'; }
    char Random() { return (rand() % 2 == 0) ? 'c' : 'd'; }
    char TitForTat(char lastMove) { return (lastMove == 'c' || lastMove == ' ') ? 'c' : 'd'; }

public:
    //Costructor
    Strategy() {
        
    }

    void setStrategy(int i) { strategy = i; }
    int getStrategy() { return strategy; }

    //memeber functinos
    char cooperateOrDefect(char lastMove) {
        if (strategy == 1) {
            return Good();
        }
        else if (strategy == 2) {
            return Evil();
        }
        else if (strategy == 3) {
            return Random();
        }
        else if (strategy == 4) {
            return TitForTat(lastMove);
        }
        else {
            cout << "Invalid Stategy for player\n";
        }
    }
};


class Game {
private:
    static int activePlayers;
    Player* playerPtr[2];

public:
    Game() {
        if (activePlayers < 1) {
            activePlayers++;
           
        }
        else {
            cout << "\n\ntoo many players, can't create another\n\n";
        }
    }

    void addPlayer(Player &P) {
        if (activePlayers < 2) {
            playerPtr[activePlayers] = &P; //save adress
            activePlayers++;
        }
        else {
            cout << "\n\ntoo many players, can't create another\n\n";
        }
    }

    void removePlayer(Player* P) {
        activePlayers--;
        if (P == playerPtr[1]) {
            playerPtr[1] = 0;
        }
        else if (P == playerPtr[0]) {
            playerPtr[0] = playerPtr[1];
            playerPtr[1] = 0;
        }
        else {
            cout << "The player wasn't i the game\n";
        }
    }

    void play(int n) {
        for (int i = 0; i < n; i++) {
            playerPtr[0]->makeMove(playerPtr[1]->getLastMove());
            playerPtr[1]->makeMove(playerPtr[0]->getLastMove());

            char p0 = playerPtr[0]->getLastMove();
            char p1 = playerPtr[1]->getLastMove();

            if (p0 == 'c' && p1 == 'c') {
                playerPtr[0]->addScore(CC);
                playerPtr[1]->addScore(CC);
            }
            else if (p0 == 'd' && p1 == 'd') {
                playerPtr[0]->addScore(DD);
                playerPtr[1]->addScore(DD);
            }
            else if (p0 == 'c' && p1 == 'd') {
                playerPtr[0]->addScore(CD);
                playerPtr[1]->addScore(DC);
            }
            else if (p0 == 'd' && p1 == 'c') {
                playerPtr[0]->addScore(DC);
                playerPtr[1]->addScore(CD);
            }
        }
        cout<<"Player 1 socre = "<< playerPtr[0]->getScore()<< "\nPlayer 2 socre = " << playerPtr[1]->getScore();
    }

};


int Player::NumOfPlayers = 0;
int Game::activePlayers = 0;


int main()
{
    Player P1(1);
    Player P2(1);

    Game g();

    g.addPlayer(&P1);
    g.addPlayer(&P2);

    g.play(20);




    return 0;
}


/*
    1\2     Cooperate           Defect
Cooperate   3   3               0   5
Defect      5   0               1   1

https://plato.stanford.edu/entries/prisoner-dilemma/strategy-table.html
*/
