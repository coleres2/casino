#ifndef CARD_H
#define CARD_H
#include <string>
#include <iostream>
using namespace std; 

class card {
    private:
    char suite; //C, S, H, D
    string numOrLetter; //2, A, K, etc.
    char color; //R or B
    bool hidden;
    int blackJackVal;
    public:
    card(char, string);
    void printCard(); 
    char getSuite();
    string getNum();
};

#endif