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
    //гетери сетери
    void setSurname(std::string s);
    void setName(std::string n);
    std::string getSurname() const;
    std::string getName() const;
    //вивід 
    virtual void print() const;

    // Оператори присвоєння та потоків
    Person& operator=(const Person& p);
    Person& operator=(Person&& p) noexcept;
    // Оператор для встановлення значень
    void operator()(std::string s, std::string n);

    // Потоки
    friend std::ostream& operator<<(std::ostream& os, const Person& p);
    friend std::istream& operator>>(std::istream& is, Person& p);




    virtual std::string getStringValue() const {
        return surname; //?//основа майбутнього поліморфізму, сподіваюся світлого майбутнього((((
    }
};

#endif