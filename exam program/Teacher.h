#ifndef TEACHER_H
#define TEACHER_H

#include "Person.h"

class Teacher : public Person {
private:
    std::string position;

public:
    Teacher(std::string s = "", std::string n = "", std::string p = "");
    Teacher(const Teacher& t);
    Teacher(Teacher&& t) noexcept;

    void setPosition(std::string p);
    std::string getPosition() const;

    void print() const override;
};

#endif