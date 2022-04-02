#include <iostream>
#include <string>

using namespace std;
class Hello{
public:
    string Hello;
    int day;
};
int main() {
    Hello privet;
    privet.Hello = "Hi";
    privet.day = 5;
    cout << privet.Hello << privet.day << endl;
}
