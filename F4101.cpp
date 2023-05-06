#include<iostream>
#include"mfun.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    int a = 0, b = 1, i = 0;
    char d = 0;
    cout << "������� ����� a:";
    cin >> a;
    cout << "�������� ��������: +, -, *, /, !, ^:";
    cin >> d;
    if (d == '!')
    {
        if (a < 0)
        {
            cout << "������: ��������� �������������� �����" << endl;
        }
        else
        {
            cout << a << " ! = " << fct(a) << endl;
        }
    }
    else
    {
        cout << "������� b:";
        cin >> b;
        switch (d)
        {
        case '+'://��������
        {
            cout << a << " + " << b << " = " << add(a,b) << endl;
            break;
        }
        case '-'://���������
        {
            cout << a << " - " << b << " = " << sub(a,b) << endl;
            break;
        }
        case '*'://���������
        {
            cout << a << " * " << b << " = " << mul(a,b) << endl;
            break;
        }
        case '/'://�������
        {
            if (b == 0)     //�������� ������� �� 0
            {
                cout << "������: ������� �� 0" << endl;
            }
            else
            {
                cout << a << " / " << b << " = " << del(a,b) << endl;
            }
            break;
        }
        case '^'://���������� � �������
        {
            if (b < 0)
            {
                cout << "������: ���������� ������� ������ ���� �������������" << endl;
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
