#ifndef DEALER_H
#define DEALER_H
#include "npc.h"
#include <iostream>
using namespace std;

class dealer: public npc {
    public: 
    int getMoney();
};
#endif