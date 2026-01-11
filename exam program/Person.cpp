#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Person {
protected:
    string surname;
    string name;

public:
    Person() : surname(""), name("") {}
    Person(string s, string n) : surname(s), name(n) {}
    Person(const Person& p) {
        surname = p.surname;
        name = p.name;
    }
    Person(Person&& p) noexcept {
        surname = move(p.surname);
        name = move(p.name);
    }
    virtual ~Person() {}
    void setSurname(string s) { surname = s; }
    void setName(string n) { name = n; }
    virtual void print() const {
        cout << surname << " " << name;
    }

    friend ostream& operator<<(ostream& os, const Person& p) {
        p.print();
        return os;
    }
    friend istream& operator>>(istream& is, Person& p) {
        is >> p.surname >> p.name;
        return is;
    }
};
