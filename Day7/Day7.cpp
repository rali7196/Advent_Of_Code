#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

class TextFile{
    public:
        string name;
        int size;
        TextFile(string name, int size){
            name = name;
            size = size;
        }
};


class Directory{
    public:
        vector<TextFile> files;

};


int main(){

    ifstream input;
    input.open("input.txt");

    string inputLine;
    vector<Directory> homeDirectory;
    //create variable that maintains current directory

    while(getline(input, inputLine)){  
        //search through homedirectory if directory exists if input is cd
            //if not in homedirectory, create new directory
            //go into new directory;(can be represented with variable)
            //

    }   
}