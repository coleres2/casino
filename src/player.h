#ifndef PLAYER_H
#define PLAYER_H
#include "person.h"
#include "customer.h"
class Player: public Customer {
    private:
    int money;
    public:
    player() {
        money = 50;
    }
    int getMoney();
    void betMoney(int bet);
};
#endif