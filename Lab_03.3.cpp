// Lab_03_3.cpp
// ��������� �����
//����������� ������ � 3.3
// ������������, ������ �������� �������
// ������ 16

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x; // ������� ��������
	double R1; // ������ ������� ��������
	double R2; // ������ ������� ��������
	double y; // ��������� ���������� ������

	cout << "R1 = "; cin >> R1;
	cout << "R2 = "; cin >> R2;
	cout << "x = "; cin >> x;

	// ������������ � ����� ����
	if (x < -1)
		y = -x - 2;
	else
		if (-1 <= x < 0)
			y = -sqrt ((R1 + x)*(R1 - x)) - 1;
			if (0 <= x < 2)
				y = sqrt((R2 + x)*(R2 - x)) + 2;
			else
				if (2 <= x < 4)
					y = -1;
				else
					y = x / 2;

	cout << endl;
	cout << "y = " << y << endl;

	cin.get();
	return 0;

}
