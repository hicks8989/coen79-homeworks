#include <iostream>
#include <fstream>
#include <sstream>
#include "scuorg.h"

namespace coen79 {
  const std::string STUDENT_FILE = "./HW7StudentTest.txt";
  const std::string STAFF_FILE   =   "./HW7StaffTest.txt";

  int printPerson(int c, SCUPerson *person, void *p) {
    std::cout << c << ": ";
    person->print();
    return 0;
  }

  void readFile(std::string filename, SCUOrg &org, bool isStudent) {
    std::fstream datafile;
    std::string line;
    int *p;

    // Opens data file for read operations.
    datafile.open(filename, std::ios::in);
    // Adds students from datafile.
    while (std::getline(datafile, line)) {
      std::istringstream ss(line);
      char cmd; int id;

      ss >> cmd;

      if (cmd == 'L') {
        org.traverse(printPerson, p);
      }

      if (cmd == 'A') {
        if (isStudent) {
          Student *student = new Student();
          ss >> *student;
          org.insert(student);
        } else {
          Staff *staff = new Staff();
          ss >> *staff;
          org.insert(staff);
        }
      }

      if (cmd == 'X') {
        ss >> id;
        org.remove(id);
      }
    }
  }

  int testCase1() {
    SCUOrg students, staff;

    // Reads in student and staff files:
    std::cout << "Reading students:" << std::endl;
    readFile(STUDENT_FILE, students, true);

    std::cout << "Reading staff:" << std::endl;
    readFile(STAFF_FILE, staff, false);

    return EXIT_SUCCESS;
  }
}