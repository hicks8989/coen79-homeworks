/*
 * Name: Eric Hicks
 * Email: ehicks2@scu.edu
 *
 * Assignment: Deck shuffle.
 * 2 of 4: Deck and Card implementations.
 */
#include <iomanip>
#include <iostream>

using namespace std;
#include "deck.h"

namespace coen79 {
	static const Card NoCard;

	const Card &Deck::deal() {
		if (next >= NCARDS)
			return NoCard;
		return cards[next++];
	}

	Deck::Deck(): next(0) {
		for (int i = 0; i < NCARDS; i++)
			cards[i] = Card(i / SUIT_LENGTH + 1, i % SUIT_LENGTH + 1);
	}

	ostream& operator<<(ostream& os, const Card &c) {
		if (c.rank == NoCard.rank && c.suit == NoCard.suit)
			cout << "Bottom of Deck Reached";
		else {
			static char s[]= {'S', 'H', 'D', 'C'};
			cout << s[c.suit-1] << ":";
			if (c.rank == 1)
				cout << 'A';
			else if (c.rank > 10 ) {
				static char honors[] = {'J', 'Q','K'};
				cout << honors[c.rank - 11];
			} else
				cout << c.rank;
		}
		return os;
	}

	ostream& operator<<(ostream& os, const Deck &d) {
		cout << "Deck at " << d.next << endl;
		for (int i = 0; i < d.NCARDS; i++)
			cout << i << ": " << d.cards[i] << endl;
		return os;
	}
}

