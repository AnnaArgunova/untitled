//
// Created by User on 17.04.2022.
//

#ifndef UNTITLED_MENUOPTIONS_H
#define UNTITLED_MENUOPTIONS_H

#endif //UNTITLED_MENUOPTIONS_H
#include "iostream"
#include "string"
#include "vector"

using namespace std;
class Student
{
public:
    string name;
    string secName;
    int age;
    ~Student()
    {

    }
    string print()
    {
        return name;
    }

};
void showMenu();
void showList();
void addStudent();
void changeStudent();
void deleteStudent();