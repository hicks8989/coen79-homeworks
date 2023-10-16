/*
 * Name: Eric Hicks
 * Email: ehicks2@scu.edu
 *
 * Assignment: Container.
 * 2 of 4: SCU Container class implementation.
 */

#include <iostream>
#include "scuclass.h"

namespace coen79 {

  SCUClass::SCUClass(const SCUClass& scuClass) {
    int multiple = (scuClass.size() / N) + 1;
    students = (Student*) malloc((N * multiple) * sizeof(Student));

    for (int i = 0; i < scuClass.size(); i++) {
      students[i] = Student(scuClass.students[i]);
    }

    length = scuClass.size();
  }

  SCUClass::~SCUClass() {
    // Free students array to prevent memory leak.
    free(students);
  }

  void SCUClass::addStudent(Student student) {
    // Precondition: The student is not already present in the class. Additionally
    // there is enough room to add the student to the class.
    // Postcondition: The student is added to the students member in the class.

    // Checks if student already exists.
    for (int i = 0; i < length; i++) {
      if (student.id == students[i].id) return;
    }

    // Checks if new memory should be allocated.
    if (length % N == 0) {
      // Allocate additional memory.
      Student* new_students = (Student*)malloc((length + N) * sizeof(Student));
      
      // Copy the students array.
      for (int i = 0; i < length; i++) {
        new_students[i] = Student(students[i]);
      }

      // Free the old array to prevent memory leak.
      free(students);
      students = new_students;
    }

    students[length++] = Student(student);
  }

  void SCUClass::erase(int id) {
    // Precondition: The size of the class is greater than 0.
    // Postcondition: The student is removed from the class.
    for (int i = 0; i < length; i++) {
      if (students[i].id != id) continue;

      // Swap the last student with the current index and decrement the length.
      students[i] = students[length - 1];
      length--;
      return;
    }

    cout << "No student found with provided id." << endl;
  }

  const Student* SCUClass::list() {
    // Postcondition: Returns a copy of the students in the class.
    Student* studentsCopy = (Student*)malloc(length * sizeof(Student));

    for (int i = 0; i < length; i++) {
      studentsCopy[i] = Student(students[i]);
    }

    return studentsCopy;
  }

  int SCUClass::size() const {
    // Postcondition: Returns the length of the class.
    return length;
  }

  ostream& operator<<(ostream& os, const SCUClass& scuClass) {
    // Postcondition: Prints out the SCU class information.

    if (scuClass.size() == 0) {
      cout << "Class is currently empty." << endl;
    }

    for (int i = 0; i < scuClass.size(); i++) {
      cout << i + 1 << ": " << scuClass.students[i];
    }

    return os;
  }
}
