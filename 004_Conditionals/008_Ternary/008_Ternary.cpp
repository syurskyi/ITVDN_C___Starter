#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");

    int     quantity    = 8;   // ��������� ������ ������
    int     price       = 75;   // ���� �� ������� ������
    double  discount    = 0.75; // ������ �� ����� ��������� 25%
    int     cost;               // ����� ��������� ������

    // ����: ���������� ������ 10, ��� ������. ��: �������� ������ 25%. �����: ������ �� ������.

    cost = (quantity >= 10) ? quantity * price * discount : quantity * price;

    cout << "����� ��������� ������: " << cost << endl;


    cin.get();
    return 0;
}

