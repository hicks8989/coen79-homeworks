#include <iostream>
#include "scuclass.h"

using namespace std;

namespace coen79 {
  ostream& operator<<(ostream& os, const Student & student) {
    cout << "Name: " << student.name << endl;
    cout << "Id: " << student.id << endl;

    return os;
  }
}
