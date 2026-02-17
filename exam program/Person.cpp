#include "Person.h"
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