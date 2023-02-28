#include "deck.h"

void deck::shuffleDeck() {
    //Most likely very inefficent,
    srand(time(NULL));
    for(int i = 0;i < numCards;i++) {
        card temp = mainDeck[i];
        int point = rand() % numCards;
        mainDeck[i] = mainDeck[point];
        mainDeck[point] = temp;
    }
}
int deck::getNumCards() {
    return numCards;
}
void deck::giveCard(npc* n) {
    this->mainDeck.back();
    
    this->mainDeck.pop_back();
}