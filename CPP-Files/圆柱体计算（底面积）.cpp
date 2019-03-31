/**
 * @name    圆柱体计算（底面积）.cpp
 * @author  tangdihao
 * @version 1.0.0
 * --------------------------------
 * 已知底面积求圆柱体的体积和表面积
 * --------------------------------
 * Copyright (c) 2019 by tangdihao.
 * All Rights Reserved.
 */

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	const double PI = 3.14;                           //定义常量圆周率
	double s;                                         //初始化底面积
	double h;                                         //初始化高
	cout << "请输入圆柱体的底面积：" << endl;
	cin >> s;                                         //输入底面积
	cout << "请输入圆柱体的高：" << endl;
	cin >> h;                                         //输入高
	cout << "体积：";
	cout << s * h << endl;                            //计算并输出体积
	cout << "表面积：";  
	cout << 2 * PI * sqrt(s / PI) * h + 2 * s << endl;//计算并输出表面积
	return 0;	
} 