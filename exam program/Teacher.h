#ifndef TEACHER_H
#define TEACHER_H

#include "Person.h"

class Teacher : virtual public Person {
private:
    std::string position;

public:
    Teacher(std::string s = "", std::string n = "", std::string p = "");
    Teacher(const Teacher& t);
    Teacher(Teacher&& t) noexcept;
    //гет сет
    void setPosition(std::string p);
    std::string getPosition() const;
    //вивід
    void print() const override;

    // оп
    Teacher& operator=(const Teacher& t);
    Teacher& operator=(Teacher&& t) noexcept;
    void operator()(std::string s, std::string n, std::string p);

    friend std::ostream& operator<<(std::ostream& os, const Teacher& t);
    friend std::istream& operator>>(std::istream& is, Teacher& t);
};

#endif