#include <string>
#include <iostream>
#include <fstream>


#include "LinkedList.h"

using namespace std;
int main(){
    //making starting stacks
    LinkedList stacks[9];

    ifstream input;
    input.open("input.txt");

    string inputLine;
    bool parsedStackLines = false;
    while(getline(input, inputLine)){
        int spaceCounter = 0;
        if(inputLine[1] == '1' && !(parsedStackLines)){
            parsedStackLines = true;
            continue;
        }
        //making the initial stacks
        for(int i = 0; i < inputLine.size(); i++){
            char currentChar = inputLine[i];
            cout << "spaceCounter: " << spaceCounter << endl;
            spaceCounter++;
            if(currentChar == '['){
                int targetStackIdx = spaceCounter / 4;
                cout 
                << "character to push: " << inputLine[i+1]
                << " || targetStack: " << targetStackIdx
                << endl;
            }

        }

    }
    return 0;
}
/*
[D]                     [N] [F]    
[H] [F]             [L] [J] [H]    
[R] [H]             [F] [V] [G] [H]
[Z] [Q]         [Z] [W] [L] [J] [B]
[S] [W] [H]     [B] [H] [D] [C] [M]
[P] [R] [S] [G] [J] [J] [W] [Z] [V]
[W] [B] [V] [F] [G] [T] [T] [T] [P]
[Q] [V] [C] [H] [P] [Q] [Z] [D] [W]
 1   2   3   4   5   6   7   8   9 
*/