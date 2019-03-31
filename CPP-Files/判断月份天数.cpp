/**
 * @name    判断月份天数.cpp
 * @author  tangdihao
 * @version 1.0.0
 * --------------------------------
 * 判断各月的天数
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
	cout << "请输入月份：";
	cin >> month;

	switch(month)
	{
		case 1:
		cout << "1月有31天" << endl;
		break;
		case 2:
		cout << "由于2月较特殊，请输入年份：";
		cin >> year;
		
		if ((year % 4 == 0 && year % 100 > 0) || (year % 400 == 0))
		{
			cout << year << "年的2月有29天" << endl;
		}
		else if (year <= 0)
		{
			cout << "抱歉不满足条件（年份不可小于等于0）" << endl;
		}
		else
		{
			cout << year << "年的2月有28天" << endl;
		}
		break;
		
		case 3:
		cout << "3月有31天" << endl;
		break;
		case 4:
		cout << "4月有30天" << endl;
		break;
		case 5:
		cout << "5月有31天" << endl;
		break;
		case 6:
		cout << "6月有30天" << endl;
		break;
		case 7:
		cout << "7月有31天" << endl;
		break;
		case 8:
		cout << "8月有31天" << endl;
		break;
		case 9:
		cout << "9月有30天" << endl;
		break;
		case 10:
		cout << "10月有31天" << endl;
		break;
		case 11:
		cout << "11月有30天" << endl;
		break;
		case 12:
		cout << "12月有31天" << endl;
		break;
		default:
		cout << "这不是合理的月份（请输入1-12）" << endl; 
		break;
	}
	return 0;
}