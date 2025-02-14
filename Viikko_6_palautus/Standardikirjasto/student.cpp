#include "student.h"

Student::Student(string a, int b)
{
    Name = a;
    Age = b;
}

void Student::setAge(int age)
{
    Age = age;
}

void Student::setName(string name)
{
    Name = name;
}

string Student::getName()
{
    return Name;
}

int Student::getAge()
{
    return Age;
}

void Student::printStudentInfo()
{
    cout << " Student " << Name << " " << Age << endl;
}
