/**
 * @name    判断盘符.cpp
 * @author  tangdihao
 * @version 1.0.0
 * --------------------------------
 * 判断输入的盘符是否满足A-Z的条件
 * --------------------------------
 * Copyright (c) 2019 by tangdihao.
 * All Rights Reserved.
 */

#include <iostream>
using namespace std;

int main(void)
{
    while (true) {                              //创建循环
        cout << "请输入一个盘符，检查是否合法：";
    	char disk = '\0';                       //将盘符的值变为空值
    	cin >> disk;                            //输入盘符

    	if (disk >= 'A' && disk <= 'Z')         //判断输入的盘符是否在A-Z之间
    	{
    		cout << "正确\n" << endl;           //满足条件
    	}
    	else
    	{
    		cout << "错误\n" << endl;           //不满足条件
    	}
    }
	return 0;
}
