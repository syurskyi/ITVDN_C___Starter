#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	short a = 1, b = 2;
	bool result;

	cout.setf(ios::boolalpha);
	// > - ������
	result = a > b;
	cout << "a > b = " << result << endl;
	// >= - ������ ��� �����
	result = a >= b;
	cout << "a >= b = " << result << endl;
	// < - ������
	result = a < b;
	cout << "a < b = " << result << endl;
	// <= - ������ ��� �����
	result = a <= b;
	cout << "a <= b = " << result << endl;
	// == - �������� ���������
	result = a == b;
	cout << "a == b = " << result << endl;
	// != - �������� �����������
	result = a != b;
	cout << "a != b = " << result << endl;
	// ��������
	cin.get();
    return 0;
}

