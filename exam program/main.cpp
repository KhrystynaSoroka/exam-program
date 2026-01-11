#include <iostream>
using namespace std;

#include "Person.h"
#include "Student.h"
#include "Teacher.h"
#include "Exam.h"
#include "GradeBook.h"

// оголошення функції з 5 пункту
void showInfo(const Person* p);

int main() {
    Student s("Іваненко", "Олег", "CS-21");
    Teacher t("Петренко", "Марія", "Доцент");

    showInfo(&s);
    showInfo(&t);

    Exam e1("Іваненко", "Олег", "CS-21",
        "Доцент",
        "ООП", 60, "Екзамен",
        "20.06.2025", 90);

    GradeBook book;
    book.addExam(e1);

    cout << "\nЗалікова книжка:\n";
    book.printAll();

    return 0;
}
