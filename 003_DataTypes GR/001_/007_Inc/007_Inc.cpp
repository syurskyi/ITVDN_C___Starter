#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	short a = 0;
	
	// ����������� ���������
	cout << a << endl;
	cout << a++ << endl;	// ������� ������� �� ����� �������� ���������� �, � ����� ����������� �������� ���������� �� �������
	cout << a << endl;

	cout << endl;

	// ���������� ���������
	
	cout << a << endl;
	cout << ++a << endl;	// ������� ����������� �������� ���������� �, � ����� ������� �� �����
	cout << a << endl;

	// ��������
	cin.get();
    return 0;
}

