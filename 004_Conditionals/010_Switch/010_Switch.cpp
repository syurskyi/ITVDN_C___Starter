#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");

    cout << "�������� ���� �� ������� ����: " << endl;
    cout << "1. ������� ����." << endl;
    cout << "2. ��������� ����." << endl;
    cout << "3. ��������� ���������." << endl;

    char action;
    cin >> action;

    switch (action)
    {
        case '1':
        {
            cout << "������ ����� ����." << endl;
            break;
        }
        case '2':
        {
            cout << "���� ��������." << endl;
            break;
        }
        case '3':
        {
            cout << "�� ��������!" << endl;
            break;
        }
        default:
        {
            cout << "�������� �����, ���������� �����!";
            break;
        }
    }

    cin.get();
    return 0;
}

