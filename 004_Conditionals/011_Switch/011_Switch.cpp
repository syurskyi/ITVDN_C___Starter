#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");

    cout << "������� ����� ��� ������: " << endl;

    int dayNumber;
    cin >> dayNumber;

    switch (dayNumber)
    {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        {
            cout << "������� ����." << endl;
            break;
        }
        case 6:
        case 7:
        {
            cout << "�������� ����." << endl;
            break;
        }
        default:
        {
            cout << "������ ��� ������ �� ����������." << endl;
            break;
        }            
    }
    return 0;
}

