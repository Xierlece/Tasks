// ConsoleApplication2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// 
// 
//Напишите программу, которая будет запрашивать у пользователя информацию о студентах (имя, фамилия, номер группы) и
//оценки по предметам (математика, физика, история) для каждого студента. Затем программа должна выводить информацию о 
//каждом студенте и его среднюю оценку по предметам.

#include <iostream>

using namespace std;

struct Student {
    char name[20];
    char lastName[20];
    string numberOfGroup;

    int mathGrade;
    int historyGrade;
    int physicsGrade;
    float average;
};

float averageNumber(int a, int b, int c);

int main()
{
    const int NUMB_STUDENTS = 3;
    Student students[NUMB_STUDENTS];

    for (int i = 0; i < NUMB_STUDENTS; i++) {
        cout << "Enter name: ";
        cin >> students[i].name;
        cout << "Enter Last Name: ";
        cin >> students[i].lastName;
        cout << "Enter Number Of Group: ";
        cin >> students[i].numberOfGroup;
        cout << "Enter Math Grade: ";
        cin >> students[i].mathGrade;
        cout << "Enter History Grade: ";
        cin >> students[i].historyGrade;
        cout << "Enter Physics Grade: ";
        cin >> students[i].physicsGrade;

    }

    system("cls");
    
    

    for (int i = 0; i < NUMB_STUDENTS; i++) {
       students[i].average = averageNumber(students[i].mathGrade, students[i].historyGrade, students[i].physicsGrade);
    }

    for (int i = 0; i < NUMB_STUDENTS; i++) {
        cout << endl;
        cout << "Name: " << students[i].name << endl;
        cout << "Last Name: " << students[i].lastName << endl;
        cout << "Number of Group: " << students[i].numberOfGroup << endl;
        cout << "Average Number is: " << students[i].average << endl;
    }



}

float averageNumber(int a, int b, int c) {
    return (a + b + c) / 3;
}
