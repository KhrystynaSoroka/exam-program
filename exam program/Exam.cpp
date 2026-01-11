#include <iostream>
#include <string>

#include "Student.cpp"
#include "Teacher.cpp"

using namespace std;

class Exam : public Student, public Teacher {
private:
    string subjectName;
    int hours;
    string examType;
    string examDate;
    int grade;

public:
    Exam(string s, string n, string g,
        string pos,
        string subj, int h, string type,
        string date, int gr)
        : Student(s, n, g),
        Teacher(s, n, pos),
        subjectName(subj),
        hours(h),
        examType(type),
        examDate(date),
        grade(gr) {}

    void print() const override {
        cout << "Іспит з предмета: " << subjectName << endl;
        cout << "Студент: "
            << Student::surname << " "
            << Student::name
            << ", група: " << groupNumber << endl;
        cout << "Викладач: " << Teacher::position << endl;
        cout << "Годин: " << hours
            << ", Вид: " << examType
            << ", Дата: " << examDate
            << ", Оцінка: " << grade << endl;
    }
};
