#include <iostream>
#include <string>
#include <Windows.h>
#include <vector>


using namespace std;
/*enum bills{DOLLARS,GRIVNA,EVRO};
class bank{
private:
    string name;
    string secName;
    int score;
    bills bill;
public:
    bank(string a,string b,int c,bills d){
       name = a;
       secName = b;
       score = c;
       bill = d;
    }
};*/
int main() {
    system("chcp 65001");
    SetConsoleOutputCP(CP_UTF8);
    //bank user1("name","secname",554,DOLLARS);
    vector<int> array {1, 2, 3};
    cout << "Состояние вектора: " << endl;
    for (int i = 0; i < array.size(); ++i) {
        cout << "Элемент " << i + 1 << ": " << array[i];
    }
}
