#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");

	int a = 2, b = 2;

	if (a < b)
	{
		cout << "a < b" << endl;
	}
	else if (a > b)
	{
		cout << "a > b" << endl;
	}
	else
	{
		cout << "a = b" << endl;
	}

	cout << "��� ������ ���������� ������!" << endl;

	cin.get();
    return 0;
}

