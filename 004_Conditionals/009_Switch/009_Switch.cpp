#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");

    int number;
    cout << "������� ����� 1 ��� 2: " << endl;
    cin >> number;

    // �� �� 16-� ������ ������� �������� ������������� ������, � � �������� ��������� ��������� �������� ���������� - number
    
    switch (number)     // (number) - ��������� ��������
    {
        case 1:         // 1-� ���������� ���������
        {
            cout << "����" << endl;     // ����� 1
            break;
        }
        case 2:         // 2-� ���������� ���������
        {
            cout << "���" << endl;      // ����� 2
            break;
        }
    }
    
    cin.get();
    return 0;
}

