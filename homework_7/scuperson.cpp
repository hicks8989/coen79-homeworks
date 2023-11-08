/*
 * Name: Eric Hicks
 * Email: ehicks2@scu.edu
 *
 * Assignment: Container with STL and inheritance.
 * 3 of 6: SCU Person implementation file.
 */
#include <iostream>
#include "scuperson.h"

namespace coen79 {
  // SCU Person Implementation:
  std::ostream& operator<<(std::ostream& os, const SCUPerson & person) {
    os << "id: " << person.id << ", name: " << person.name;
    return os;
  }

  std::istream& operator>>(std::istream& is, SCUPerson & person) {
    is >> person.id >> person.name;
    return is;
  }

  // Student Implementation:
  std::ostream& operator<<(std::ostream& os, const Student & student) {
    os << "id: " << student.id << ", name: " << student.name << ", year entered: " << student.yearEnter;
    return os;
  }

	std::istream& operator>>(std::istream& is, Student  & student) {
    is >> student.id >> student.name >> student.yearEnter;
    return is;
  }

  void Student::print() {
    std::cout << *this << std::endl;
  }

  // Staff Implementation:
  std::ostream& operator<<(std::ostream& os, const Staff & staff) {
    os << "id: " << staff.id << ", name: " << staff.name << ", title: " << staff.title;
    return os;
  }

	std::istream& operator>>(std::istream& is, Staff  & staff) {
    is >> staff.id >> staff.name >> staff.title;
    return is;
  }

  void Staff::print() {
    std::cout << *this << std::endl;
  }

}