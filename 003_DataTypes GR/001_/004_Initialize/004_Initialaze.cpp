#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	//  ������������� ��� ������ ���������� �������� ����������
	// �� 10-� ������ ��������� ���������� max � �������������� �� ��������� ��������� INT_MAX
	int max = INT_MAX;

	char ch = 'A';			// ���������� ch ��������������� �������� �
	ch = 'B';				// ���������� ch ����������� (��������) ��������
	
	int b;					// ��������� ���������� b ���� int
	b = 10;					// ���������� b �������������� ��������� 10

	int c(255);				// ������� ���������� � ���� int  � �������������� �� ��������� 255

	// � �++11 �������� ����� ������ ������������� ����������, ����� ������ ������������� ������������� ������ ������ �� ������ �������������� �����

	int d = { 2 };			// ��������� ���������� d � �������������� �� ��������� 2
	// int d = { }			// ��������� ���������� d � �������������� �� ��������� �� ���������
		
	int e { 3 };			// ��������� ���������� e � �������������� �� ��������� 2
	//int e { }				// ��������� ���������� e � �������������� �� ��������� �� ���������

	// ��������
	cin.get();
    return 0;
}

