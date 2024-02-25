// Написать функцию, которая возвращает истину, если передаваемое значение положительное и ложь, если отрицательное


#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;

#define NEGATIVORPOSITIV(num) ((num) > (0))

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int input = 0;
    while (true) {
        cout << "Введите значение (для выхода закройте программу): ";        
        cin >> input;
      
        cout << "Введённое значение " << input << " " << (NEGATIVORPOSITIV(input) ? "положительное" : "отрицательное") << endl;        
    }
}
