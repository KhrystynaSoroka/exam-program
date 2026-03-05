#ifndef EXAM_H
#define EXAM_H

#include "Student.h"
#include "Teacher.h"

class Exam : public Student, public Teacher {
private:
    std::string subjectName;
    int hours;
    std::string date;
    int grade;

public:
    Exam(std::string s_surname = "", std::string s_name = "", std::string group = "",
        std::string t_surname = "", std::string t_name = "", std::string pos = "",
        std::string subject = "", int h = 0, std::string d = "", int g = 0);

    Exam(const Exam& e);
    Exam(Exam&& e) noexcept;
    ~Exam();

    /////mетоди встановлення та отримання
    void setSubjectInfo(std::string subject, int h, std::string d, int g);
    std::string getSubjectName() const;
    int getGrade() const;

    // Оператори
    Exam& operator=(const Exam& e);
    void operator()(std::string subject, int g); 

    void print() const;
    
    
    
    
    
    
    std::string getStringValue() const override {
        return subjectName; ///повернення для цього полім кластера....................перевизнач
    }
};

#endif