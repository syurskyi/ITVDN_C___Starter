#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	// ��� ����� ����� �� ���������� �������������� ���� ���������� �������������� ��������

	// ���������� �� ���������
	int operand1 = 10;
	operand1 = operand1 + 5;
	operand1 += 5;				// ������� ����� ������

	// ���������� � ���������� 
	int operand1 = 10;
	operand1 = operand1 - 5;
	operand1 -= 5;


	// ���������� � ����������
	int operand1 = 10;
	operand1 = operand1 * 5;
	operand1 *= 5;


	// ���������� � ��������
	int operand1 = 10;
	operand1 = operand1 / 5;
	operand1 /= 5;

	// ���������� � ���������� ������� �� �������
	int operand1 = 10;
	operand1 = operand1 % 5;
	operand1 %= 5;
	
	// ��� ������������ ����� �� ���������� �������������� ���� ���������� �������������� ��������

	// ���������� � ��������
	double operand2 = 3;
	operand2 = operand2 / 2;
	operand2 /= 2;

	// ���������� � ��������
	float operand3 = 7;
	operand3 = operand3 / 3;
	operand3 /= 3;

	// ��������
	cin.get();
	return 0;
}

