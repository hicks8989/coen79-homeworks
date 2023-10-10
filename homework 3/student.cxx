/*
 * Name: Eric Hicks
 * Email: ehicks2@scu.edu
 *
 * Assignment: Container.
 * 3 of 4: Student class implementation.
 */

#include <iostream>
#include "scuclass.h"

using namespace std;

namespace coen79 {
  ostream& operator<<(ostream& os, const Student & student) {
    // Postcondition: Prints out the name and id of the student.
    cout << "Name: " << student.name << ", id: " << student.id << endl;
    return os;
  }
}
