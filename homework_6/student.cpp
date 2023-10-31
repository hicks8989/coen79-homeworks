#include "student.h"

namespace coen79 {
  ostream& operator<<(ostream& out, const Student& student) {
    // Postcondition: Prints the students name and id.
    out << "Name: " << student.name << ", ID: " << student.id;
    return out;
  }

  bool operator==(const Student& s1, const Student& s2) {
    // Postcondition: Returns if two student instances are
    // the same by comparing the student ids.
    return s1.id == s2.id;
  }

  bool operator!=(const Student& s1, const Student &s2) {
    // Postcondition: Returns if two student instances are
    // not the same by comparing the student ids.
    return s1.id != s2.id;
  }
}
