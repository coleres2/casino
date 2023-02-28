#include "hand.h"

void hand::printHand() {
    for(int i = 0;i < currentHand.size();i++) {
        currentHand[i].printCard();
    }
}

int hand::getTotal() {
    return this->total;
}

// void hand::createHand(int* deck) {
//     bool temp = drawCard(deck);
//     bool temp = drawCard(deck);
// }

void hand::addCard(card c) {
    currentHand.push_back(c);
    numCards++;
}
// bool hand::drawCard(int* deck) {
//     while(true) {
//         srand(time(NULL));
//         int a = rand()%13;
//         if(deck[a] > 0) {
//             deck[a]--;
//             if(a < 8) {
//                 this->total += a+2;
//                 this->cardNames[numCards] = 'n';
//                 this->cardVals[numCards] = a+2;
//                 numCards++;
//             }
//             else if(a < 12) {
//                 switch(a) {
//                     case 9: {
//                         this->total += 10;
//                         this->cardNames[numCards] = 'J';
//                         this->cardVals[numCards] = 10;
//                         break;
//                     }
//                     case 10:
//                         this->total += a+2;
//                         this->cardNames[numCards] = 'Q';
//                         this->cardVals[numCards] = 10;
//                         break;
//                     case 11:
//                         this->total += 10;
//                         this->cardNames[numCards] = 'Q';
//                         this->cardVals[numCards] = 10;
//                         break;
//                     case 12: 
//                         if(total <= 10) {
//                             total += 11;
//                             this->cardVals[numCards] = 11;
//                         }
//                         else {
//                             total += 1;
//                             this->cardVals[numCards] = 11;
//                         }
//                         this->cardNames[numCards] = 'A';
//                         break;
//                 }
//             }
//             break;
//         }
//     }
    
//     if(total > 21) {
//         return false;
//     }
//     return true;
// }