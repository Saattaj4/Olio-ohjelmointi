#include <iostream>
#include "student.h"
#include "vector"
#include "algorithm"

using namespace std;



int main ()
{
    string nimi;
    int selection =0;
    vector<Student>studentList;

    // Alussa luodaan opiskelijat
    Student A("Janne",19);
    Student B("Liisa",23);
    Student C("Anne",95);
    Student D("Erkki",46);

    studentList.push_back(A);
    studentList.push_back(B);
    studentList.push_back(C);
    studentList.push_back(D);

    do
    {
        cout<<endl;
        cout<<"Select"<<endl;
        cout<<"Add students = 0"<<endl;
        cout<<"Print all students = 1"<<endl;
        cout<<"Sort and print students according to Name = 2"<<endl;
        cout<<"Sort and print students according to Age = 3"<<endl;
        cout<<"Find and print student = 4"<<endl;
        cin>>selection;

        switch(selection)
        {
        case 1:
            // Tulosta StudentList vektorin kaikkien opiskelijoiden nimet.

            for (Student s: studentList)
            {
                cout << " " <<s.getName() << endl;
            }
            break;

        case 2:
            // Järjestä StudentList vektorin Student oliot nimen mukaan
            // algoritmikirjaston sort funktion avulla
            // ja tulosta printStudentInfo() funktion avulla järjestetyt
            // opiskelijat
            std::sort( studentList.begin(), studentList.end(),[](Student& a, Student& b)
                {
                return  a.getName() < b.getName();
                });
            for (Student s: studentList)
            {
                s.printStudentInfo();
            }
            break;

        case 3:
            // Järjestä StudentList vektorin Student oliot iän mukaan
            // algoritmikirjaston sort funktion avulla
            // ja tulosta printStudentInfo() funktion avulla järjestetyt
            // opiskelijat
            std::sort(studentList.begin(), studentList.end(),[](Student& a, Student& b)
            {
                return  a.getAge() > b.getAge();
            });
            for (Student s: studentList)
            {
                s.printStudentInfo();
            }
            break;

        case 4:
        {
            // Kysy käyttäjältä opiskelijan nimi
            // Etsi studentListan opiskelijoista algoritmikirjaston
            // find_if funktion avulla löytyykö käyttäjän antamaa nimeä
            // listalta. Jos löytyy, niin tulosta opiskelijan tiedot.

            cout << "Annappa opiskelija nimes listaan: " << endl;
            cin >> nimi;

            auto it = find_if(studentList.begin(), studentList.end(),[nimi](Student &s)
            {
                return s.getName() == nimi;
            });

            if (it != studentList.end())
            {
                cout << "Vastaava loytyi!" << endl;
                it->printStudentInfo();
            }
            else
            {
                cout << "Ei loytynyt" << endl;
            }
        }
                break;


        default:
            cout<< "Wrong selection, stopping..."<<endl;
            break;
        }
    }while(selection < 5);

            return 0;

    }

