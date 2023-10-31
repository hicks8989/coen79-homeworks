/*
 * Name: Eric Hicks
 * Email: ehicks2@scu.edu
 *
 * Assignment: Container with STL.
 * 4 of 5: SCU Student header file.
 */
#include <iostream>

using namespace std;

namespace coen79 {
  class Student {
  public:
    // Constructors:
    Student(int id = 0, string name = ""): id(id), name(name){};
    Student(const Student& student): id(student.id), name(student.name){};

    // Friend functions:
    friend ostream& operator<<(ostream& out, const Student& student);
    friend bool operator==(const Student& s1, const Student& s2);
    friend bool operator!=(const Student& s1, const Student& s2);
  private:
    int id;
    string name;
  };
}