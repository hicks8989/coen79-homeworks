/*
 * Name: Eric Hicks
 * Email: ehicks2@scu.edu
 *
 * Assignment: Deck shuffle.
 * 1 of 4: Deck and Card header file.
 */
namespace coen79 {
	// Card definition
	// State your invariants
	class Card {
	public:
		int rank;
		int suit;
		Card(): rank(0), suit(0) {}
		Card(int s, int r): rank{r}, suit{s} {}
		
	friend ostream& operator<<(ostream& os, const Card &c);
	};

	// Deck definition
	// State your invariants
	class Deck {
	public:
		const size_t NCARDS = 52;
		Deck();
		const Card &deal();
		void shuffle(void);

	friend ostream& operator<<(ostream& os, const Deck &);

	private:
		const size_t SUIT_LENGTH = 13;
		Card cards[52];
		int next;
	};
}
