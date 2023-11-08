/*
 * Name: Sin-Yaw Wang
 */
#include <string>

#ifndef SCUPERSONH
#define SCUPERSONH

namespace coen79 {
	class SCUPerson {
	public:
		SCUPerson(): SCUPerson(0, "") {}
		SCUPerson(int i): SCUPerson(i, "") {}
		SCUPerson(int i, std::string s): id{i}, name{s} {}
		const int getId() const { return id; }
    virtual void print() = 0;
	friend std::ostream& operator<<(std::ostream& os, const SCUPerson &);
	friend std::istream& operator>>(std::istream& is, SCUPerson &);

	protected:
		int id;
		std::string name;
	};

	class Student : public SCUPerson {
	public:
		Student(): Student(0, "", 0) {}
		Student(int i): Student(i, "", 0) {}
		Student(int i, std::string s): Student(i, s, 0) {}
		Student(int i, std::string s, int yr): SCUPerson(i, s), yearEnter(yr) {}
    virtual void print();
	friend std::ostream& operator<<(std::ostream& os, const Student &);
	friend std::istream& operator>>(std::istream& is, Student  &);

	protected:
		int yearEnter;
	};

	class Staff : public SCUPerson {
	public:
		Staff(): Staff(0, "", "") {}
		Staff(int i): Staff(i, "", "") {}
		Staff(int i, std::string s): Staff(i, s, "") {}
		Staff(int i, std::string s, std::string t): SCUPerson(i, s), title(t) {}
    virtual void print();
	friend std::ostream& operator<<(std::ostream& os, const Staff &);
	friend std::istream& operator>>(std::istream& is, Staff  &);

	protected:
		std::string title;
	};
}

#endif
