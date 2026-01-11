#include "Person.cpp"

class Student : public Person {
protected:
    string groupNumber;

public:
    Student() : Person(), groupNumber("") {}

    Student(string s, string n, string g)
        : Person(s, n), groupNumber(g) {}

    void setGroup(string g) { groupNumber = g; }

    void print() const override {
        cout << "Студент: ";
        Person::print();
        cout << ", група: " << groupNumber;
    }
};
