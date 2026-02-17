#include "Student.h"

Student::Student(std::string s, std::string n, std::string g)
    : Person(s, n), groupNumber(g) {}///ini

Student::Student(const Student& s) : Person(s), groupNumber(s.groupNumber) {}///////copy

Student::Student(Student&& s) noexcept : Person(std::move(s)), groupNumber(std::move(s.groupNumber)) {}//move

void Student::setGroup(std::string g) { groupNumber = g; }
std::string Student::getGroup() const { return groupNumber; }

void Student::print() const {
    std::cout << "[Студент] ";
    Person::print();
    std::cout << ", група: " << groupNumber << std::endl;
}