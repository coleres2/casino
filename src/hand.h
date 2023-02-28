#ifndef HAND_H
#define HAND_H
#include <iostream>
#include <string>
#include <vector>
#include "card.h"
using namespace std;
class hand {
    private:
    int total;
    int numCards = 0;
    vector<card> currentHand;
    public:
    void printHand(); 
    void createHand(int*);
    void addCard(card);
    int getTotal();
    hand(int* deck) {
        this->createHand(deck);
    }
};

#endif