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
	cout << "Приветствую! Я калькулятор Архимед." << endl <<
		"Выберите режим работы:" << endl <<
		"1 - "Классический. Выбор номера действия." << endl <<
		"2 - "Расширенный. Ручной ввод примера по схеме число-знак-число." << endl;
	int z;
	cin >> z;
	cout << "\nРежим работы: " << z << endl;
	
	switch (z)
	{
	case 1:
		{
			cout << "\n1 - Сложение" << endl;
			cout << "2 - Вычитание" << endl;
			cout << "3 - Умножение" << endl;
			cout << "4 - Деление" << endl;
			cout << "\nВвод дробей осуществляется через точку!" << endl;

			int i = 1;
			while (i == 1)
			{

				long double a;
				long double b;
				cout << "\nВведите число: ";
				cin >> a;
				cout << "Введите число: ";
				cin >> b;

				int k;
				cout << "\Введите номер действия: ";
				cin >> k;

				if (k == 1)
				{
					long double c = addition(a, b);
					cout << "Ответ: " << c << endl;
				}
				else if (k == 2)
				{
					long double c = subtraction(a, b);
					cout << "Ответ: " << c << endl;
				}
				else if (k == 3)
				{
					long double c = multiply(a, b);
					cout << "Ответ: " << c << endl;
				}
				else if (k == 4)
				{
					long double c = division(a, b);
					cout << "Ответ: " << c << endl;
				}
			}

		}
		break;

	case 2:
		{
			cout << "\n+ Сложение" << endl;
			cout << "- Вычитание" << endl;
			cout << "* Умножение" << endl;
			cout << "/ Деление" << endl;
			cout << "\nВвод дробей осуществляется через точку!" << endl;

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
