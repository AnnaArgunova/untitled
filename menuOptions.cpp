//
// Created by User on 08.04.2022.
//
#include "menuOptions.h"
#include <string>
#include <Windows.h>
#include <iostream>
void addUser()
{

    cout << "=====Создание пользователя=====" << endl;
    cout << "введите имя: " << endl;
    cin >> ob1.name;
    cout << "Введите фамилию: " << endl;
    cin >> ob1.secName;
    ob1.score = 555;
    ob1.bill = DOLLARS;
    cout << "Пользователь создан с именем" << ob1.name;
}