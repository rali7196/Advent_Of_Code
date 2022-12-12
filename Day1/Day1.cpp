#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
int main(){
    ifstream input;
    input.open("input.txt");


    string inputLine;
    int current = 0;
    int currentTotal = 0;
    vector<int> totals;

    while(getline(input, inputLine)){
        //check if line is empty
        //add currentTotal to totals
        //set current and currentTotal to 0;
        if(inputLine.length() == 0){
            totals.push_back(currentTotal);
            current = 0;
            currentTotal = 0;
            continue;
        }
        else{
            current = stoi(inputLine);
            currentTotal += current;
        }

        // else just add current to currenttotal

    }

    sort(totals.begin(), totals.end(), greater<int>());
    int returnValue = totals[0] + totals[1] + totals[2];
    cout << returnValue << endl;
    return 5;

}