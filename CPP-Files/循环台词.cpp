/**
 * @name    ѭ��̨��.cpp
 * @author  tangdihao
 * @version 1.0.0
 * --------------------------------
 * ѭ�����
 * --------------------------------
 * Copyright (c) 2019 by tangdihao.
 * All Rights Reserved.
 */

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int i = 1;
	int j;
	string sentence;

	cout << "������ѭ������䣺" << endl;
	cin >> sentence;
	cout << "������ѭ���Ĵ�����" << endl;
	cin >> j;

	while(i <= j)
	{
		cout << sentence << "\t��" << i << "��" << endl;
		i++;
	}

	cout << "Done!" << endl;
	return 0;
}