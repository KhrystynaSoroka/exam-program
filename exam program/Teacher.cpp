#include "Teacher.h"

Teacher::Teacher(std::string s, std::string n, std::string p)
    : Person(s, n), position(p) {}

Teacher::Teacher(const Teacher& t) : Person(t), position(t.position) {}

Teacher::Teacher(Teacher&& t) noexcept : Person(std::move(t)), position(std::move(t.position)) {}

void Teacher::setPosition(std::string p) { position = p; }
std::string Teacher::getPosition() const { return position; }

void Teacher::print() const {
    std::cout << "[Викладач] ";
    Person::print();
    std::cout << ", посада: " << position << std::endl;
}