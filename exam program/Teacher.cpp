#include <iostream>
#include <string>
#include "Person.cpp"

using namespace std;

class Teacher : public Person {
protected:
    string position;

public:
    Teacher() : Person(), position("") {}

    Teacher(string s, string n, string p)
        : Person(s, n), position(p) {}

    void setPosition(string p) { position = p; }

    void print() const override {
        cout << "Викладач: ";
        Person::print();
        cout << ", посада: " << position;
    }
};
