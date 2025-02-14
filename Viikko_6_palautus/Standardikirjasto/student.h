#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>

using namespace std;
class Student


{
public:

    Student(string, int);
    void setAge(int);
    void setName(string);
    string getName();
    int getAge();
    void printStudentInfo();

private:
    int Age;
    string Name;
};

#endif // STUDENT_H
