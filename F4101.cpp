#include<iostream>
#include"mfun.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    int a = 0, b = 1, i = 0;
    char d = 0;
    cout << "Введите число a:";
    cin >> a;
    cout << "Выберите действие: +, -, *, /, !, ^:";
    cin >> d;
    if (d == '!')
    {
        if (a < 0)
        {
            cout << "Ошибка: факториал отрицательного числа" << endl;
        }
        else
        {
            cout << a << " ! = " << fct(a) << endl;
        }
    }
    else
    {
        cout << "Введите b:";
        cin >> b;
        switch (d)
        {
        case '+'://Сложение
        {
            cout << a << " + " << b << " = " << add(a,b) << endl;
            break;
        }
        case '-'://Вычитание
        {
            cout << a << " - " << b << " = " << sub(a,b) << endl;
            break;
        }
        case '*'://Умножение
        {
            cout << a << " * " << b << " = " << mul(a,b) << endl;
            break;
        }
        case '/'://Деление
        {
            if (b == 0)     //Проверка деления на 0
            {
                cout << "Ошибка: деление на 0" << endl;
            }
            else
            {
                cout << a << " / " << b << " = " << del(a,b) << endl;
            }
            break;
        }
        case '^'://Возведение в степень
        {
            if (b < 0)
            {
                cout << "Ошибка: показатель степени должен быть положительным" << endl;
            }
            else
            {
                cout << a << " ^ " << b << " = " << stp(a, b) << endl;
            }
            break;
        }
        }
    }

    return 0;

}
