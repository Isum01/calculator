#include <iostream>
using namespace std;

long double addition(long double a, long double b)
{
	long double c = a + b;
	return c;
}

long double subtraction(long double a, long double b)
{
	long double c = a - b;
	return c;
}

long double multiply(long double a, long double b)
{
	long double c = a * b;
	return c;
}

long double division(long double a, long double b)
{
	long double c = a / b;
	return c;
}

int main()
{
	setlocale(LC_ALL, "Rus");
	cout << "�����������! � ����������� �������." << endl <<
		"�������� ����� ������:" << endl <<
		"1 - ����� ��������" << endl <<
		"2 - ������ ����  �������" << endl;
	int z;
	cin >> z;
	cout << "\n����� ������: " << z << endl;
	
	switch (z)
	{
	case 1:
		{
			cout << "\n1 - ��������" << endl;
			cout << "2 - ���������" << endl;
			cout << "3 - ���������" << endl;
			cout << "4 - �������" << endl;
			cout << "\n���� ������ �������������� ����� �����!" << endl;

			int i = 1;
			while (i == 1)
			{

				long double a;
				long double b;
				cout << "\n������� �����: ";
				cin >> a;
				cout << "������� �����: ";
				cin >> b;

				int k;
				cout << "\n������� ����� ��������: ";
				cin >> k;

				if (k == 1)
				{
					long double c = addition(a, b);
					cout << "�����: " << c << endl;
				}
				else if (k == 2)
				{
					long double c = subtraction(a, b);
					cout << "�����: " << c << endl;
				}
				else if (k == 3)
				{
					long double c = multiply(a, b);
					cout << "�����: " << c << endl;
				}
				else if (k == 4)
				{
					long double c = division(a, b);
					cout << "�����: " << c << endl;
				}
			}

		}
		break;

	case 2:
		{
			cout << "\n+ ��������" << endl;
			cout << "- ���������" << endl;
			cout << "* ���������" << endl;
			cout << "/ �������" << endl;
			cout << "\n���� ������ �������������� ����� �����!" << endl;

			int i = 1;
			while (i == 1)
			{
				long double a;
				cin >> a;
				char p;
				cin >> p;
				long double b;
				cin >> b;

				if (p == '+')
				{
					long double c = addition(a, b);
					cout << " = " << c << endl;
				}
				else if (p == '-')
				{
					long double c = subtraction(a, b);
					cout << a << p << b << " = " << c << endl;
				}
				else if (p == '*')
				{
					long double c = multiply(a, b);
					cout << a << p << b << " = " << c << endl;
				}
				else if (p == '/')
				{
					long double c = division(a, b);
					cout << a << p << b << " = " << c << endl;
				}
			}
		}
		break;
	}
}