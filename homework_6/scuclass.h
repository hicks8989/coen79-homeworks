#include <iostream>
#include "student.h"

using namespace std;

namespace coen79 {
  class SCUClass {
  public:
    // Constructors:
    SCUClass(){};
    SCUClass(const SCUClass& scuClass): students(scuClass.students){};

    // Member Functions:
    void addStudent(Student student);
    void erase(int id);

    // Constant Member Functions:
    int size() const;
    vector<Student> list() const;

    // Operators:
    Student operator[](int pos) const;

    // Friend Functions:
    friend ostream& operator<<(ostream& out, const SCUClass& c);

  private:
    vector<Student> students;

    // Helper Functions:
    bool has(Student student) const;
  };
}