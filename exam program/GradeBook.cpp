#include <iostream>
#include <string>
#include <vector>
#include "Exam.cpp"
using namespace std;


class GradeBook {
private:
    vector<Exam> exams;

public:
    void addExam(const Exam& e) {
        exams.push_back(e);
    }

    void printAll() const {
        for (const auto& e : exams) {
            e.print();
            cout << "-------------------" << endl;
        }
    }
};
