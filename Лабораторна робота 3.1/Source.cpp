// Lab_03_1.cpp 
// < ������� �볿 > 
// ����������� ������ � 3.1 
// ������������, ������ ��������: ������� ���� �����. 
// ������ 20

#include <iostream> 
#include <cmath> 

using namespace std;

int main()
{
    double x;  // ������� �������� 
    double y;  // ��������� ���������� ������ 
    double A;  // �������� ��������� - ������������� ����� ������� ������ 
    double B;  // �������� ��������� - ������������� ����� ������� ������ 

    cout << "x = "; cin >> x;

    A = sin(x) / cos(x) + 1;

    // ����� 1: ������������ � ��������� ���� 
    if (x <= -5)
        B = exp(x / (1 - x));
    if (-5 < x && x <= 3)
        B = 3.2 + log10(1.8 * x * x);
    if (x > 3)
        B = fabs(x) * sqrt(x);

    y = A + B;

    cout << endl;
    cout << "1) y = " << y << endl;

    // ����� 2: ������������ � ����� ���� 
    if (x <= -5)
        B = exp(x / (1 - x));
    else
        if (-5 < x && x <= 3)
            B = 3.2 + log10(1.8 * x * x);
        else
            B = fabs(x) * sqrt(x);

    y = A + B;
    cout << "2) y = " << y << endl;

    cin.get();
    return 0;
}





