#include "stdafx.h"
#include <iostream>
#include <string>   // ������ <string> ������������ ��� ������ �� ��������

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");

	string name = "Vladimir";
	string password = "P@ss123";

	string userName;
    string userPass;

    // ������ ��� ������������
	cout << "������� ���: ";
	cin >> userName;            
    
    if (userName == name)
    {
        // ���� ��� �������� �����, ������ ������������ ������ ������
        cout << "������� ������: ";
        cin >> userPass;

        if (userPass == password)
        {
            cout << "������������ " << userName << ". �� ����� � �������!" << endl;
        }
        else
        {
            cout << "�������� ������!" << endl;
        }
    }
    else
    {
        cout << "�������� ��� ������������!" << endl;
    }

	cin.get();
    return 0;
}

