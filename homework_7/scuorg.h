/*
 * Name: Eric Hicks
 * Email: ehicks2@scu.edu
 *
 * Assignment: Container with STL and inheritance.
 * 2 of 6: SCU Container header file.
 */
#include "scuperson.h"
#include <vector>

#ifndef SCUORGH
#define SCUORGH

namespace coen79 {
	// Linked List for the SCUClass applciation
	class SCUOrg {
	public:
		~SCUOrg();
		void insert(SCUPerson *);
		void remove(int);
		void traverse(int (*process)(const int, SCUPerson *, void *), void *);
	private:
		std::vector<SCUPerson *> org;
    bool has(int) const;
	};

	// declare the test function
	int testCase1(void);
}
#endif // SCUORGH
