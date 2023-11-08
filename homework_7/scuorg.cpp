/*
 * Name: Eric Hicks
 * Email: ehicks2@scu.edu
 *
 * Assignment: Container with STL and inheritance.
 * 1 of 6: SCU Container implementation file.
 */
#include <iostream>
#include "scuorg.h"

namespace coen79 {
  SCUOrg::~SCUOrg() {
    org.clear();
  }

  // Member Functions:
  void SCUOrg::insert(SCUPerson *person) {
    // Postcondition: Adds the student to the students vector if
    // the student is not already present in the vector.
    if (has(person->getId())) {
      std::cout << "Student already in provided class." << std::endl;
      return;
    }

    try {
      org.push_back(person);
    } catch(std::bad_alloc) {
      std::cout << "Failed to allocate memory for new person." << std::endl;
    }
  }

  void SCUOrg::remove(int id) {
    // Postcondtition: Removes the provided student from the
    // SCUClass vector.
    Student student(id, "");

    for (int i = 0; i < org.size(); i++) {
      SCUPerson *person = org[i];
      if (person->getId() != id) continue;

      org.erase(org.begin() + i);
      return;
    }

    std::cout << "No Student found in class matching provided description." << std::endl;
  }

  void SCUOrg::traverse(int (*process)(const int, SCUPerson *, void *), void *p) {
		for (int i = 0; i < org.size(); i++) {
			(void) process(i, org[i], p);
		}
  }

  // Helper Functions:
  bool SCUOrg::has(int id) const {
    // Postcondition: Returns if the SCUClass already has the provided
    // student in its students vector.
    for (auto person : org) {
      if (person->getId() == id) return true;
    }

    return false;
  }
}