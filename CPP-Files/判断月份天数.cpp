/**
 * @name    �ж��·�����.cpp
 * @author  tangdihao
 * @version 1.0.0
 * --------------------------------
 * �жϸ��µ�����
 * --------------------------------
 * Copyright (c) 2019 by tangdihao.
 * All Rights Reserved.
 */

#include <iostream>
using namespace std;

int main()
{
	int month = '\0';
	int year = '\0';
	cout << "�������·ݣ�";
	cin >> month;

	switch(month)
	{
		case 1:
		cout << "1����31��" << endl;
		break;
		case 2:
		cout << "����2�½����⣬��������ݣ�";
		cin >> year;
		
		if ((year % 4 == 0 && year % 100 > 0) || (year % 400 == 0))
		{
			cout << year << "���2����29��" << endl;
		}
		else if (year <= 0)
		{
			cout << "��Ǹ��������������ݲ���С�ڵ���0��" << endl;
		}
		else
		{
			cout << year << "���2����28��" << endl;
		}
		break;
		
		case 3:
		cout << "3����31��" << endl;
		break;
		case 4:
		cout << "4����30��" << endl;
		break;
		case 5:
		cout << "5����31��" << endl;
		break;
		case 6:
		cout << "6����30��" << endl;
		break;
		case 7:
		cout << "7����31��" << endl;
		break;
		case 8:
		cout << "8����31��" << endl;
		break;
		case 9:
		cout << "9����30��" << endl;
		break;
		case 10:
		cout << "10����31��" << endl;
		break;
		case 11:
		cout << "11����30��" << endl;
		break;
		case 12:
		cout << "12����31��" << endl;
		break;
		default:
		cout << "�ⲻ�Ǻ�����·ݣ�������1-12��" << endl; 
		break;
	}
	return 0;
}