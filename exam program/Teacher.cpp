#include "Teacher.h"
#include <utility>

Teacher::Teacher(std::string s, std::string n, std::string p)
    : Person(s, n), position(p) {}

Teacher::Teacher(const Teacher& t) : Person(t), position(t.position) {}

Teacher::Teacher(Teacher&& t) noexcept : Person(std::move(t)), position(std::move(t.position)) {}

void Teacher::setPosition(std::string p) { position = p; }
std::string Teacher::getPosition() const { return position; }

void Teacher::print() const {
    std::cout << "[Викладач] ";
    Person::print();
    std::cout << ", посада: " << position;
}

// Оператори
Teacher& Teacher::operator=(const Teacher& t) {
    if (this != &t) {
        Person::operator=(t);
        position = t.position;
    }
    return *this;
}

Teacher& Teacher::operator=(Teacher&& t) noexcept {
    if (this != &t) {
        Person::operator=(std::move(t));
        position = std::move(t.position);
    }
    return *this;
}

void Teacher::operator()(std::string s, std::string n, std::string p) {
    Person::operator()(s, n);
    position = p;
}

std::ostream& operator<<(std::ostream& os, const Teacher& t) {
    t.print();
    return os;
}

std::istream& operator>>(std::istream& is, Teacher& t) {
    is >> static_cast<Person&>(t) >> t.position;
    return is;
}