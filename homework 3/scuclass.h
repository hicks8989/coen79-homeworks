#include <string>

using namespace std;

namespace coen79 {
  class Student {
    public:
    Student(int, string);
    int id;
    string name;

    // OVERLOAD OPERATORS:
    friend ostream& operator<<(ostream& os, const Student &);
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

    // CONSTANT MEMBER FUNCTIONS
    int size() const;

    // OVERLOAD OPERATORS:
    friend ostream& operator<<(ostream& os, const SCUClass &);
  };
}
