// ������ ���������� ��������� - ������� ��������
#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
    int a = 2, b = 3, c;

    c = (a > b) ? a : b;        // ����: a > b ��: ������� � ����� ������� b

    cout << c << endl;

    /*
    if(a > b)
    {
        c = a;
    }
    else
    {
        c = b;
    }
    */

    cin.get();
    return 0;
}

