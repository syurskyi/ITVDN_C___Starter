#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
    // ������� setlocale ������ ������, ������� ����� �������������� ������� ����������
    setlocale(LC_ALL, "rus");       // LC_ALL - ��� ������, ������ �������� - ������, ���������� ��� ������.

	int a = 3, b = 2;

	if (a < b)
	{
		cout << "a < b" << endl;
	}

	cout << "��� ������ ���������� ������!";

	cin.get();
    return 0;
}

