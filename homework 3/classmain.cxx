/*
 * Name: Eric Hicks
 * Email: ehicks2@scu.edu
 *
 * Assignment: Container.
 * 4 of 4: SCU Container main file.
 */

#include <iostream>
#include "scuclass.h"

using namespace coen79;
using namespace std;

int main() {
  // Creates SCU Class.
  SCUClass coen79;
  Student eric(1629357, "Eric");

  // Student gets added.
  coen79.addStudent(eric);
  cout << coen79;

  // Student fails to be added.
  coen79.addStudent(eric);

  // Student gets removed.
  coen79.erase(1629357);
  cout << coen79;

  // Student is not in class and can't be removed.
  coen79.erase(1629357);

  // Adds 30 students.
  for (int i = 0; i <= 30; i++) {
    Student student(i, "New Student");
    coen79.addStudent(student);
  }

  return EXIT_SUCCESS;
}