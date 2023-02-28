#ifndef NPC_H
#define NPC_H
#include <iostream>
#include "hand.h"
#include "deck.h"
#include "person.h"
#include "player.h"
class npc: public Customer {
    private:
    int money;
    public:
    hand myHand = new hand();
    npc();
    ~npc(); // destructor
    virtual int getMoney() = 0;
    void takeCard();
};

#endif