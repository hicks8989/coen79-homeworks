#include <iostream>
#include "scuclass.h"

using namespace std;

namespace coen79 {
  Student::Student(int id, string name) {
    this->id = id;
    this->name = name;
  }

  ostream& operator<<(ostream& os, const Student & student) {
    cout << "Name: " << student.name << endl;
    cout << "Id: " << student.id << endl;

    return os;
  }
}
