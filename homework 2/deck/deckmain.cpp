/*
 * Name: Eric Hicks
 * Email: ehicks2@scu.edu
 *
 * Assignment: Deck shuffle.
 * 4 of 4: Deck and card testing.
 */
#include <iomanip>
#include <iostream>
using namespace std;
#include "deck.h"
using namespace coen79;

int main(void) {
	Deck deck;

  // Show the initial deck.
	cout << deck;
  cout << "Dealing deck." << endl;

  // Deal the entire deck.
  for (int i = 0; i <= deck.NCARDS; i++) {
    cout << deck.deal() << endl;
  }

  cout << "Shuffling deck." << endl;

  // Shuffle the deck.
  deck.shuffle();

  // Show the newly shuffled deck. Ensures the deck is starting from the top.
  cout << deck;
  cout << "Dealing deck." << endl;

  // Deal the shuffled deck.
  for (int i = 0; i <= deck.NCARDS; i++) {
    cout << deck.deal() << endl;
  }

	return 0;
}

