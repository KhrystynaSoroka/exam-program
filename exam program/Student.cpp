#include "Student.h"
#include <utility>

Student::Student(std::string s, std::string n, std::string g)
    : Person(s, n), groupNumber(g) {}///ini

Student::Student(const Student& s) : Person(s), groupNumber(s.groupNumber) {}///////copy

Student::Student(Student&& s) noexcept : Person(std::move(s)), groupNumber(std::move(s.groupNumber)) {}//move

void Student::setGroup(std::string g) { groupNumber = g; }
std::string Student::getGroup() const { return groupNumber; }

void Student::print() const {
    std::cout << "[Студент] ";
    Person::print();
    std::cout << ", група: " << groupNumber;
}

//
Student& Student::operator=(const Student& s) {
    if (this != &s) {
        Person::operator=(s);
        groupNumber = s.groupNumber;
    }
    return *this;
}

Student& Student::operator=(Student&& s) noexcept {
    if (this != &s) {
        Person::operator=(std::move(s));
        groupNumber = std::move(s.groupNumber);
    }
    return *this;
}

void Student::operator()(std::string s, std::string n, std::string g) {
    Person::operator()(s, n);
    groupNumber = g;
}

std::ostream& operator<<(std::ostream& os, const Student& s) {
    s.print();
    return os;
}

std::istream& operator>>(std::istream& is, Student& s) {
    is >> static_cast<Person&>(s) >> s.groupNumber;
    return is;
}