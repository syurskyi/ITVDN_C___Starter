// ��������� �������� ��������
#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
    int a = 8, b = 7, c = 1, max = -1;

    max = (a < b) ? c = b : c = a;  // ������ � = b, � ������ ����� max = �

    cout << max << endl;

    cin.get();
    return 0;
}

