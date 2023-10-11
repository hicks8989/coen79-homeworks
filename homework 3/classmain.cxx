/*
 * Name: Eric Hicks
 * Email: ehicks2@scu.edu
 *
 * Assignment: Container.
 * 4 of 4: SCU Container main file.
 */

#include <iostream>
#include <fstream>
#include <sstream>
#include "scuclass.h"

using namespace coen79;
using namespace std;

int main() {
  // Creates SCU Class.
  SCUClass coen79;
  Student eric(1629357, "Eric");
  fstream datafile;
  string line;

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

  // Opens data file for read operations.
  datafile.open("./datafile.txt", ios::in);

  // Adds 30 students + 1 more to test capacity.
  while (getline(datafile, line)) {
    istringstream ss(line);
    int id; string name;

    ss >> id >> name;
    Student student(id, name);

    cout << "Currently adding " << student;
    coen79.addStudent(student);
  }

  cout << coen79;

  return EXIT_SUCCESS;
}
