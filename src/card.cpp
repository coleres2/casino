#include "card.h"

void card::printCard() {
    if(hidden) {
        cout << " _____" << endl;
        cout << "|" << this->numOrLetter << "* * *|" << endl;
        cout << "|" << this->numOrLetter << " * * |" << endl;
        cout << "|" << this->numOrLetter << "* * *|" << endl;
        cout << "|" << this->numOrLetter << "_*_*_|" << endl;
    }
    else {
        cout << " _____" << endl;
        cout << "|" << this->numOrLetter << "   |" << endl;
        cout << "|" << this->suite << "   |" << endl;
        cout << "|   " << this->suite << "|" << endl;
        cout << "|___" << this->numOrLetter << "|" << endl;
    }
}

card::card(char suite, string val) {
    this->suite = suite;
    this->numOrLetter = val; 
}

char card::getSuite() {
    return this->suite;
}
string card::getNum() {
    return this->numOrLetter;
}