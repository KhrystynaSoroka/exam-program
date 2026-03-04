#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"

class Student : public Person {
private:
    std::string groupNumber;

public:
    Student(std::string s = "", std::string n = "", std::string g = "");
    Student(const Student& s);//
    Student(Student&& s) noexcept;//
    //get set
    void setGroup(std::string g);
    std::string getGroup() const;
    //видр
    void print() const override;

    // Оператори
    Student& operator=(const Student& s);
    Student& operator=(Student&& s) noexcept;
    void operator()(std::string s, std::string n, std::string g);

    friend std::ostream& operator<<(std::ostream& os, const Student& s);
    friend std::istream& operator>>(std::istream& is, Student& s);
};

#endif