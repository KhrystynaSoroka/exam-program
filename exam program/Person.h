#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>

class Person {
protected:
    std::string surname;
    std::string name;

public:
    Person(std::string s = "", std::string n = "");
    Person(const Person& p);            
    //копіювання 
    Person(Person&& p) noexcept;       
    //переміщення
    virtual ~Person();

    void setSurname(std::string s);
    void setName(std::string n);
    std::string getSurname() const;
    std::string getName() const;

    virtual void print() const;
};

#endif