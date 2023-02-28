#include <iostream>
#include <time.h>
#include <vector>
#include "hand.h"
using namespace std;

int main() {
    int userScore = 0;
    int dealerScore = 0;
    
    int* cards = new int[13];
    for(int i = 0;i < 13;i++) {
        cards[i] = 4;
    }
    hand dealerHand = hand(cards);
    hand myHand = hand(cards);
    // for(int i = 0;i < 2;i++) { Is in constructor
    //     dealerHand.drawCard(cards);
    //     myHand.drawCard(cards);
    // }
    while(true) {
        char choice;
        dealerHand.printHand();
        myHand.printHand();
        cout << "Would you like to draw or hold: ";
        try {
            cin >> choice;
            choice = tolower(choice);
            if(choice != 'd' || choice != 'h') {
                throw exception();
            }
            if(choice == 'd') {
                myHand.drawCard(cards);
            }
            else {
                while (dealerHand.getTotal() < 17)
                {
                    dealerHand.drawCard(cards);
                }
                
            }
        }
        catch(exception e) {
            cout << "Invalid option";
        }
    }
}

// int dealCards(int& user, int& dealer, int* cards) {
//     srand(time(NULL));
//     for(int i = 0;i < 2;i++) {
//         int a = rand()%13;
//         cards[a]--;
//         if(a < 8) {
//             user += a;
//         }
//         else if(a < 12)
//     }
// }