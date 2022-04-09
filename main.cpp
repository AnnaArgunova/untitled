#include <iostream>
#include <string>
#include <Windows.h>
#include <vector>
#include "menuOptions.h"
#include "menuOptions.cpp"

enum bills{DOLLARS,GRIVNA,EVRO};
class bank{
public:
    string name;
    string secName;
    int score;
    bills bill;
};
void showMenu()
{
    int act ;
    cout << "=============Меню=============" << endl;
    cout << "1 - Добавить пользователя" << endl;
    cout << "==============================" << endl;
    cout << "0 - Закончить выполнение" << endl;
    cout << "==============================" << endl;
    cin >> act;
    switch (act) {
        case 1:
            addUser();
    }
}
int main() {
    int count = 1;
    //bank ob1("gara","gth", 555,DOLLARS);
    vector<bank> users;

}
