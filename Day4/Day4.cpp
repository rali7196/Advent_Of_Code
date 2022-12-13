#include <fstream>
#include <string>
#include <iostream>
#include <cstring>

using namespace std;
#ifdef day1
int main(){
    ifstream input;
    input.open("input.txt");

    string inputLine;
    int counter = 0;

    char* cInputLine;
    while(getline(input, inputLine)){
        cInputLine = strdup(inputLine.c_str());
        char* range1 = strtok(cInputLine, ",");
        char* range2 = strtok(NULL, ",");

        int startRange1 = stoi(strtok(range1, "-"));
        int endRange1 = stoi(strtok(NULL, "-"));

        int startRange2 = stoi(strtok(range2, "-"));
        int endRange2 = stoi(strtok(NULL, "-"));
        //check if first range contains second range
        if(startRange1 <= startRange2 && endRange1 >= endRange2){
            counter++;
        }
        //check if second range contains first range
        else if(startRange2 <= startRange1 && endRange2 >= endRange1){
            counter++;
        }
    }
    cout << counter << endl;
}
#else
int main(){
    ifstream input;
    input.open("input.txt");

    string inputLine;
    int counter = 0;

    char* cInputLine;
    while(getline(input, inputLine)){
        cInputLine = strdup(inputLine.c_str());
        char* range1 = strtok(cInputLine, ",");
        char* range2 = strtok(NULL, ",");

        int startRange1 = stoi(strtok(range1, "-"));
        int endRange1 = stoi(strtok(NULL, "-"));

        int startRange2 = stoi(strtok(range2, "-"));
        int endRange2 = stoi(strtok(NULL, "-"));
        
    }
    cout << counter << endl;
}
#endif