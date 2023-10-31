/*
 * Name: Eric Hicks
 * Email: ehicks2@scu.edu
 *
 * Assignment: Container with STL.
 * 1 of 5: SCU Container main file.
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
  vector<Student> students;
  fstream datafile;
  string line;

  // Opens data file for read operations.
  datafile.open("./testdata.txt", ios::in);

  // Adds students from datafile.
  while (getline(datafile, line)) {
    istringstream ss(line);
    char cmd; int id; string name;

    ss >> cmd;

    if (cmd == 'L') {
      cout << coen79;
    }

    if (cmd == 'A') {
      ss >> id >> name;
      Student student(id, name);
      coen79.addStudent(student);
    }

    if (cmd == 'X') {
      ss >> id;
      coen79.erase(id);
    }
  }

  return EXIT_SUCCESS;
}
