/*
 * Name: Eric Hicks
 * Email: ehicks2@scu.edu
 *
 * Assignment: Deck shuffle.
 * 3 of 4: Deck shuffle implementation.
 */
#include <iomanip>
#include <iostream>

using namespace std;
#include "deck.h"

namespace coen79 {
	void Deck::shuffle(void) {
    next = 0;  // Reset next since a shuffle will start at the top of the deck.
    srand(17); // Set seed for random function.

    // Iterate from NCARDS - 1 to ensure that the NOCARD is not added.
    for (int i = NCARDS - 1; i > 0; i--) {
      int random_index = rand() % i; // Get a random index from within the range.

      // Swap the cards.
      Card temp = cards[i];
      cards[i] = cards[random_index];
      cards[random_index] = temp;
    }
	}
}

