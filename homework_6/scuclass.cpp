/*
 * Name: Eric Hicks
 * Email: ehicks2@scu.edu
 *
 * Assignment: Container with STL.
 * 3 of 5: SCU container implemntation file.
 */
#include "scuclass.h"

namespace coen79 {
  // Member Functions:
  void SCUClass::addStudent(Student student) {
    // Postcondition: Adds the student to the students vector if
    // the student is not already present in the vector.
    if (has(student)) {
      cout << "Student already in provided class." << endl;
      return;
    }

    try {
      students.push_back(student);
    } catch(bad_alloc) {
      cout << "Failed to allocate memory for new student." << endl;
    }
  }

  void SCUClass::erase(int id) {
    // Postcondtition: Removes the provided student from the
    // SCUClass vector.
    Student student(id, "");

    for (int i = 0; i < students.size(); i++) {
      if (students[i] != student) continue;

      students.erase(students.begin() + i);
      return;
    }

    cout << "No Student found in class matching provided description." << endl;
  }

  // Constant Member Functions:
  vector<Student> SCUClass::list() const {
    // Postcondition: Returns a copy of the students vector.
    vector<Student> students_copy(students);
    return students_copy;
  }

  int SCUClass::size() const {
    // Postcondition: Returns the number of students in the
    // students vector.
    return students.size();
  }

  // Operators:
  Student SCUClass::operator[](int pos) const {
    // Precondition: The provided position is non negative and in range.
    // Postcondition: Returns the element at the provided index.
    assert(pos >= 0 && pos < students.size());
    return students[pos];
  }

  // Helper Functions:
  bool SCUClass::has(Student student) const {
    // Postcondition: Returns if the SCUClass already has the provided
    // student in its students vector.
    for (int i = 0; i < students.size(); i++) {
      if (students[i] == student) return true;
    }

    return false;
  }

  // Friend Functions:
  ostream& operator<<(ostream& out, const SCUClass& scuClass) {
    // Postcondition: Outputs all the students in the class.
    for (int i = 0; i < scuClass.size(); i++) {
      out << i + 1 << ": " << scuClass[i] << endl;
    }

    return out;
  }
}