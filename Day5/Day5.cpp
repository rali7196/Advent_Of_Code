#include <string>
#include <iostream>
#include <fstream>
#include <vector>

#include "LinkedList.h"

#define STACK_AMOUNT 9

using namespace std;

vector<string> parse(string&);
int main(){
    //making starting stacks
    LinkedList stacks[STACK_AMOUNT];
    for(int i = 0; i < STACK_AMOUNT; i++){
        stacks[i] = LinkedList();
    }

    ifstream input;
    input.open("input.txt");

    string inputLine;
    bool parsedStackLines = false;
    //PARSING THE INITIAL STACK
    while(getline(input, inputLine)){
        int spaceCounter = 0;
        cout << inputLine << endl;
        if(inputLine[0] == ' '){
            parsedStackLines = true; 
            continue;
        }

        //making the initial stacks
        if(!(parsedStackLines)){
            for(int i = 0; i < inputLine.size(); i++){
                char currentChar = inputLine[i];
                spaceCounter++;
                if(currentChar == '['){
                    int targetStackIdx = spaceCounter / 4;
                    stacks[targetStackIdx].insertAtEnd(inputLine[i+1]);
                }

            }
        }
        //PARSING REST OF FILE
        else{
            cout << "new iteration" << endl;
            vector<string> parsedInput = parse(inputLine);


        }



    }


    //for rest of logic, parse strings using strtok
    //get first, second, and third number
    //first number is how many times to pop second number
    //second number corresponds to stack
    //third number corresponds to target stack 
    return 0;
}

vector<string> parse(string& input){
    char delimiter = ' ';
    string pushString = "";
    vector<string> output;
    for(unsigned i = 0; i < input.size(); i++){
        char currentChar = input[i];
        if(currentChar == ' '){
            output.push_back(pushString);
            pushString = "";
            continue;
        }
        pushString += currentChar;
    }
    output.push_back(pushString);
    return output;
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