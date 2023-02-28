#ifndef DECK_H
#define DECK_H
#include <vector>
#include <iostream>
#include <string>
#include <list>
#include <deck.h>
#include <time.h>
#include "card.h"
#include "npc.h"

using namespace std;

class deck {
    private:  
    vector<card> mainDeck;
    int numCards;
    public:
    deck() {
        char suites[4] = {'S', 'H', 'C', 'D'};
        for(int i = 0;i < 4;i++) {
            mainDeck.push_back(card(suites[i], "2"));
            mainDeck.push_back(card(suites[i], "3"));
            mainDeck.push_back(card(suites[i], "4"));
            mainDeck.push_back(card(suites[i], "5"));
            mainDeck.push_back(card(suites[i], "6"));
            mainDeck.push_back(card(suites[i], "7"));
            mainDeck.push_back(card(suites[i], "8"));
            mainDeck.push_back(card(suites[i], "9"));
            mainDeck.push_back(card(suites[i], "10"));
            mainDeck.push_back(card(suites[i], "J"));
            mainDeck.push_back(card(suites[i], "Q"));
            mainDeck.push_back(card(suites[i], "K"));
            mainDeck.push_back(card(suites[i], "A"));
            numCards = 52;
        }
    }
    ~deck();
    void shuffleDeck();
    int getNumCards();
    void giveCard(npc*);
    
    
};
#endif