#include <iostream>
#include <string>

class Student {
public:
    int id;
    double score;

    Student(int id, double score) : id(id), score(score) {}
};

Student* maxScoreStudent(Student* students, int size) {
    Student* maxStudent = &students[0];
    for (int i = 1; i < size; i++) {
        if (students[i].score > maxStudent->score) {
            maxStudent = &students[i];
        }
    }
    return maxStudent;
}

int main() {
    Student students[5] = {
        Student(1001, 85.5),
        Student(1002, 92.0),
        Student(1003, 78.5),
        Student(1004, 88.0),
        Student(1005, 95.5)
    };

    Student* maxStudent = maxScoreStudent(students, 5);
    std::cout << "最高成绩的学生学号是：" << maxStudent->id << std::endl;

    return 0;
}