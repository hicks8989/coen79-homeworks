/*
 * Name: Eric Hicks
 * Email: ehicks2@scu.edu
 *
 * Assignment: Container.
 * 1 of 4: SCU Container class header file.
 */
#include <string>

using namespace std;

namespace coen79 {
  class Student {
    public:
    int id;
    string name;

    // CONSTRUCTOR:
    Student(int student_id, string student_name) : id{student_id}, name{student_name} {};

    // OVERLOAD OPERATORS:
    friend ostream& operator<<(ostream& os, const Student&);
  };

  class SCUClass {
    private:
    static const int CAPACITY = 30;
    int length;
    int next;

    public:
    Student students[CAPACITY];

    // MEMBER FUNCTIONS:
    void addStudent(Student);
    void erase(int);
    const Student* list();

    // CONSTANT MEMBER FUNCTIONS
    int size() const;

    // OVERLOAD OPERATORS:
    friend ostream& operator<<(ostream& os, const SCUClass&);
  };
}
