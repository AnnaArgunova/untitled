//
// Created by User on 17.04.2022.
//

#include <iostream>
#include "menuOptions.h"


vector<Student> Students;
void showMenu()
{
    int act;
    cout << "=============Меню=============" << endl;
    cout << "1 - Показать список" << endl;
    cout << "2 - Добавить студента" << endl;
    cout << "3 - Сменить студента" << endl;
    cout << "4 - Удалить студента" << endl;
    cout << "==============================" << endl;
    cout << "0 - Выход" << endl;
    cout << "==============================" << endl;
    cin >> act;
    switch (act) {
        case 1: {
            showList();
            showMenu();
            break;
        }
        case 2: {
            addStudent();
            showMenu();
            break;
        }
        case 3:
            changeStudent();
            break;
        case 4:
            deleteStudent();
            break;
        default: cout << "Неверная цифра!" << endl;
    }
}
void showList()
{
    int act;
    if (Students.size() == 0)
    {
        cout << "Список пуст!" << endl;
        showMenu();
    }
    else {
        cout << "============Список============" << endl;
        for (int i = 0; i < Students.size(); ++i) {
            if (Students[i].age != 0) {
                cout << i + 1 << ". " << Students[i].name << " " << Students[i].secName << endl;
            } else i++;
        }
        cout << "Общее количество студентов: " << Students.size() << endl;
        cout << "==============================" << endl;
        cout << "0 - Вернуться" << endl;
        cout << "==============================" << endl;
        cin >> act;
        showMenu();
    }
}
void addStudent()
{
    int act;
    string n,s;
    int a;
    cout << "======Добавить Студента=======" << endl;
    cout << "Введите имя: ";
    cin >> n;
    cout << endl;
    cout << "Ввведите фамилию: ";
    cin >> s;
    cout << endl;
    cout << "Введите возраст: ";
    cin >> a;
    cout << endl;
    Student* ob2 = new Student;
    ob2->name = n;
    ob2->secName = s;
    ob2->age = a;
    Students.push_back(*ob2);
    cout << "Студент с именем: " << n << " Создан" << endl;
    cout << "==============================" << endl;
    cout << "0 - Вернуться" << endl;
    cout << "==============================" << endl;
    cin >> act;
}
void changeStudent()
{
    int act, num;
    cout << "Введите номер студента которого надо изменить" << endl;
    int action;
    if (Students.size() == 0)
    {
        cout << "Список пуст!" << endl;
        showMenu();
    }
    else {
        cout << "============Список============" << endl;
        for (int i = 0; i < Students.size(); ++i)
            cout << i + 1 << ". " << Students[i].name << " " << Students[i].secName << endl;
        cout << "Общее количество студентов: " << Students.size() << endl;
        cout << "==============================" << endl;
        cout << "0 - Вернуться" << endl;
        cout << "==============================" << endl;

    }
    cin >> num;
    cout << "=======Выберите параметр======" << endl;
    cout << "1 - Сменить имя" << endl;
    cout << "2 - Сменить фамилию" << endl;
    cout << "3 - Сменить возраст" << endl;
    cout << "==============================" << endl;
    cout << "0 - Вернуться" << endl;
    cout << "==============================" << endl;
    cin >> act;
    switch (act) {
        case 1:
            cout << "Введите имя: " << endl;
             cin >> Students[num - 1].name;
             break;
        case 2:
            cout << "Введите фамилию: " << endl;
            cin >> Students[num - 1].secName;
            break;
        case 3:
            cout << "Введите возраст: " << endl;
            cin >> Students[num - 1].age;
            break;
        default:
            cout << "Invalid Number!" << endl;
        break;
    }
    cout << "Студент с именем: " << Students[num - 1].name << " успешно изменен" << endl;
    showMenu();
}
void deleteStudent()
{
    Student object;
    cout << "Введите номер студента которого надо удалить" << endl;
    int act;
    if (Students.size() == 0)
    {
        cout << "Список пуст!" << endl;
        showMenu();
    }
    else {
        cout << "============Список============" << endl;
        for (int i = 0; i < Students.size(); ++i)
            //if(Students[i].age != 0) {
                cout << i + 1 << ". " << Students[i].name << " " << Students[i].secName << endl;
            //}
        //else
        cout << "Общее количество студентов: " << Students.size() << endl;
        cout << "==============================" << endl;
        cout << "0 - Вернуться" << endl;
        cout << "==============================" << endl;
    }
    int num;
    cin >> num;
    //Student* ob3 = new Student(Students[num - 1]);
    //delete ob3;
    Students[num - 1].age = 0;
    Students.resize(Students.size() - 1);
    showMenu();
}
