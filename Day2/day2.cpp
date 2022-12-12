#include <fstream>
#include <iostream>
#include <string>
#include <cstring>
#include <unordered_map>

using namespace std;

int main(){
    ifstream input;

    input.open("input.txt");

    string inputLine;
    char* cInputLine;
    

    int total_score = 0;
    //X means lose, Y means draw, Z means win
    //A is rock, B is paper, C is scissors
    //rock is 1
    //scissors is 2
    //paper is 3
    unordered_map<string, int> moves;
    moves["rock"] = 1;
    moves["scissors"] = 3;
    moves["paper"] = 2;
    while(getline(input, inputLine)){
        int addScore = 0;
        cInputLine = strdup(inputLine.c_str());
        string enemyMove = strtok(cInputLine, " ");
        string gameOutcome = strtok(NULL, " ");
        if(enemyMove == "A"){//enemy plays rock
            if(gameOutcome == "X"){//lose, play scissors
                addScore = moves["scissors"] + 0;
            }
            if(gameOutcome == "Y"){//tie, play rock
                addScore = moves["rock"] + 3;
            }
            if(gameOutcome == "Z"){
                //win, play paper
                addScore = moves["paper"] + 6;
            }
        }
        if(enemyMove == "B"){
            //enemy plays paper
            if(gameOutcome == "X"){//lose, play rock
                addScore = moves["rock"] + 0;
            }
            if(gameOutcome == "Y"){//tie, play paper
                addScore = moves["paper"] + 3;
            }
            if(gameOutcome == "Z"){
                //win, play scissors
                addScore = moves["scissors"] + 6;
            }            
        }
        if(enemyMove == "C"){//enemy plays scissors
            if(gameOutcome == "X"){//lose, play paper
                addScore = moves["paper"] + 0;
            }
            if(gameOutcome == "Y"){//tie, play scissors
                addScore = moves["scissors"] + 3;
            }
            if(gameOutcome == "Z"){
                //win, play rock
                addScore = moves["rock"] + 6;
            }             
        }
        total_score += addScore;
    } 
    cout << total_score << endl;
    return 0;
}

