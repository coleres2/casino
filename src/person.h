#ifndef PERSON_H
#define PERSON_H

enum CurrentStation {
    NOT_GAMBLING = 0,
    BLACKJACK = 1,
    ROULETTE = 2,
    CRAPS = 3,
    POKER = 4,
    SLOTS = 5
};

class Person
{
    private:
    int total; 
    public:
    int getMoney();
    
};

#endif
