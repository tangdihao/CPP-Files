/**
 * @name    循环台词.cpp
 * @author  tangdihao
 * @version 1.0.0
 * --------------------------------
 * 循环语句
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

	cout << "请输入循环的语句：" << endl;
	cin >> sentence;
	cout << "请输入循环的次数：" << endl;
	cin >> j;

	while(i <= j)
	{
		cout << sentence << "\t第" << i << "遍" << endl;
		i++;
	}

	cout << "Done!" << endl;
	return 0;
}