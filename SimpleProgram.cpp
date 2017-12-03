#include "stdafx.h"
#include <iostream>
#include <cmath>
#include "clocale"

using namespace std;

void showMenu()
{
	system("cls");
	cout << "�������� ���� �� ������� ����: " << endl;
	cout << "1. ����� ���� �����." << endl;
	cout << "2. �������� ���� �����." << endl;
	cout << "3. ������������ ���� �����." << endl;
	cout << "4. ������� ���� �����." << endl;
	cout << "5. �����." << endl;
	cout << "___________________________________" << endl;
}

void sum(int a, int b)
{
	cout << "����� �����: " << a + b << endl;
	system("pause");
}

void razn(int a, int b)
{
	cout << "�������� �����: " << a - b << endl;
	system("pause");
}

void multiply(int a, int b)
{
	cout << "������������ �����: " << a * b << endl;
	system("pause");
}

void del(int a, int b)
{
	cout << "������� �����: " << a / b << endl;
	system("pause");
}

int main()
{
	setlocale(0, "rus");

	bool exit = false;
	char choice;
	int a, b;

	while (!exit)
	{
		system("cls");
		cout << "������� ��� �����, � �������� ������ ��������� ��������: " << endl;
		cin >> a >> b;

		showMenu();

		cin >> choice;

		switch (choice)
		{
		case '1':
			sum(a, b);
			break;
		case '2':
			razn(a, b);
			break;
		case '3':
			multiply(a, b);
			break;
		case '4':
			del(a, b);
			break;
		case '5':
			exit = true;
			break;
		default:
			cout << "������ ������ ���� ���. ���������� �����" << endl;
			system("pause");
		}
	}

	return 0;
}
