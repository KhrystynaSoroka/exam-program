#include "Exam.h"

// Конструктор ініціалізації
Exam::Exam(std::string s_surname, std::string s_name, std::string group,
    std::string t_surname, std::string t_name, std::string pos,
    std::string subject, int h, std::string d, int g)
    : Person(s_surname, s_name),
    Student(s_surname, s_name, group),
    Teacher(t_surname, t_name, pos),
    subjectName(subject), hours(h), date(d), grade(g)
{}
void Exam::operator()(std::string subject, int g) {
    subjectName = subject;
    grade = g;
}
// Конструктор копіювання
Exam::Exam(const Exam& e)
    : Student(e), Teacher(e),
    subjectName(e.subjectName), hours(e.hours), date(e.date), grade(e.grade) {}

// Конструктор переміщення
Exam::Exam(Exam&& e) noexcept
    : Student(std::move(e)), Teacher(std::move(e)),
    subjectName(std::move(e.subjectName)), hours(e.hours),
    date(std::move(e.date)), grade(e.grade) {}

Exam::~Exam() {}

void Exam::setSubjectInfo(std::string subject, int h, std::string d, int g) {
    subjectName = subject;
    hours = h;
    date = d;
    grade = g;
}

void Exam::print() const {
    std::cout << "========== ЕКЗАМЕНАЦІЙНИЙ ЛИСТ ==========" << std::endl;
    std::cout << "Предмет: " << subjectName << " | Дата: " << date << std::endl;
    std::cout << "Тривалість: " << hours << " год. | Оцінка: " << grade << std::endl;
    std::cout << "-----------------------------------------" << std::endl;
    std::cout << "Студент: " << Student::getSurname() << " " << Student::getName()
        << " (Група: " << getGroup() << ")" << std::endl;

    std::cout << "Викладач: " << Teacher::getSurname() << " " << Teacher::getName()
        << " (Посада: " << getPosition() << ")" << std::endl;
    std::cout << "=========================================" << std::endl;
}

std::string Exam::getSubjectName() const { return subjectName; }
int Exam::getGrade() const { return grade; }