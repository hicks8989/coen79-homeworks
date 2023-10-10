#include <iostream>
#include <string>

using namespace std;

namespace coen79 {
  class Student {
    public:
    Student(int, string);
    int id;
    string name;
  };

  class SCUClass {
    private:
    const static int CAPACITY = 30;
    int length;

    public:
    Student students[CAPACITY];

    // MEMBER FUNCTIONS:
    void addStudent(Student);
    void erase(int);
    void list();

    // OVERLOAD OPERATORS:
    
  };
}
