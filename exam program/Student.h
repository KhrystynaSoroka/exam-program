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

    void setGroup(std::string g);
    std::string getGroup() const;

    void print() const override;
};

#endif