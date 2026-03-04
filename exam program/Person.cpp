#include "Person.h"
#include <utility>

//ініціал
Person::Person(std::string s, std::string n) : surname(s), name(n) {}
//коп
Person::Person(const Person& p) : surname(p.surname), name(p.name) {}
//перем
Person::Person(Person&& p) noexcept : surname(std::move(p.surname)), name(std::move(p.name)) {}

Person::~Person() {}

void Person::setSurname(std::string s) { surname = s; }
void Person::setName(std::string n) { name = n; }
std::string Person::getSurname() const { return surname; }
std::string Person::getName() const { return name; }

void Person::print() const {
    std::cout << surname << " " << name;
}

// присвоєння
Person& Person::operator=(const Person& p) {
    if (this != &p) {
        surname = p.surname;
        name = p.name;
    }
    return *this;
}

Person& Person::operator=(Person&& p) noexcept {
    if (this != &p) {
        surname = std::move(p.surname);
        name = std::move(p.name);
    }
    return *this;
}

///oператор встановлення значень
void Person::operator()(std::string s, std::string n) {
    surname = s;
    name = n;
}

///потокове виведення
std::ostream& operator<<(std::ostream& os, const Person& p) {
    p.print();
    return os;
}

//потокове введення
std::istream& operator>>(std::istream& is, Person& p) {
    is >> p.surname >> p.name;
    return is;
}