#include <iostream>
#include "windows.h"
#include "Leaver.h"

int main()
{
    setlocale(LC_ALL, "Russian");

    std::string name;

    std::cout << "Введите имя: ";
    std::cin >> name;

    Leaver lv;
    std::cout << lv.leave(name);
    Sleep(5000);
    return 0;
}