#include <string>
#include <unordered_map>
#include <fstream>
#include <iostream>

using namespace std;

void generate(unordered_map<char, int>& input){
    char current = 'a';
    for(int i = 0; i < 26; i++){
        input[current] = i + 1;
        current++;
    }
    current = 'A';
    for(int i = 26; i < 52; i++){
        input[current] = i + 1;
        current++;
    }
}
#ifdef DAY1
int main(){
    fstream input;
    input.open("input.txt");

    //generate dictionary
    char placeHolder = 'a';

    unordered_map<char, int> values;
    generate(values);
    auto it = values.begin();

    string inputLine;
    int sum = 0;
    while(getline(input, inputLine)){
        //split the string into halves
        int halfPoint = inputLine.size() / 2;
        string firstComp;
        string secondComp;
        int dummy = halfPoint;
        for(int i = 0; i < halfPoint; i++){
            firstComp += inputLine[i];
            secondComp += inputLine[dummy];
            dummy++;
        }
        //find letters that occur in both strings and store in array letters
        char same;
        for(int i = 0; i < firstComp.size(); i++){
            if(secondComp.find(firstComp[i]) != string::npos){
                same = firstComp[i];
                break;
            }
        }
        //go through hashmap and find largest amount of characters
        //write priority of most commoncharacter to output file
        sum += values[same];
    }
    cout << sum << endl;
}
/*
----------------------------------------------
DAY 2
----------------------------------------------
*/
#else
int main(){
    fstream input;
    input.open("input.txt");

    //generate dictionary
    char placeHolder = 'a';

    unordered_map<char, int> values;
    generate(values);

    string inputLine;
    int sum = 0;
    int lineNumber = 0;//actually a line counter
    vector<string> group;
    while(getline(input, inputLine)){
        //collect three strings
        if(lineNumber < 3){
            group.push_back(inputLine);
            lineNumber++;
        }
        else{     
            auto first = group[0];
            auto second = group[1];
            auto third = group[2];
            char same = 'a';
            for(int i = 0; i < first.size(); i++){
                if(second.find(first[i]) != string::npos && 
                third.find(first[i]) != string::npos){
                    same = first[i];
                    break;
                }
            }
            sum += values[same];             

            group.clear();
            lineNumber = 1;
            group.push_back(inputLine);
        }
        //find letters that occur in both strings and store in array letters

        //go through hashmap and find largest amount of characters
        //write priority of most commoncharacter to output file
}
    auto first = group[0];
    auto second = group[1];
    auto third = group[2];
    char same = 'a';
    for(int i = 0; i < first.size(); i++){
        if(second.find(first[i]) != string::npos && 
        third.find(first[i]) != string::npos){
            same = first[i];
            break;
        }
    }
    sum += values[same];    
    cout << sum << endl;

}
#endif
