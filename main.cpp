#include <iostream>
#include <string>
#include <Windows.h>
#include <vector>
#include "menuOptions.h"

using namespace std;

void run()
{
    showMenu();
}

int main() {
    system("chcp 65001");
    SetConsoleOutputCP(CP_UTF8);
    run();
}