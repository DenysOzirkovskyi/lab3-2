// Lab_03_2.cpp
// <Озірковський Денис >
// Лабораторна робота № 3.2
// Розгалуження, задане формулою: функція з параметрами.
// Варіант 11
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double x; // вхідний аргумент
    double a; // вхідний параметр
    double b; // вхідний параметр
    double c; // вхідний параметр
    double F; // результат обчислення виразу

    cout << "a = "; cin >> a;

    cout << "b = "; cin >> b;

    cout << "c = "; cin >> c;

    cout << "x = "; cin >> x;

    if (x < 1 && c != 0)
         F = a * x * x + b / c;
    
    if (x >1.5 && c== 0)
        F = (x - a) / ((x - c) * (x - c));
    
    if(!(x < 1 && c != 0) && !(x > 1.5 && c == 0))
            F = (x * x) / (c * c);
    cout << endl;
    cout << "1F = " << F << endl;

    if (x < 1 && c != 0)
        F = a * x * x + b / c;
    else 
        if (x > 1.5 && c == 0)
            F = (x - a) / ((x - c) * (x - c));
        else
            F = (x * x) / (c * c);
    cout << "2F = " << F << endl;

    return 0;

}