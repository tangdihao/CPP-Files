/**
 * @name    圆柱体计算（半径）.cpp
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
	const double PI = 3.14;                            //定义常量圆周率     
	double r;                                          //初始化半径
	double h;                                          //初始化高
	cout << "请输入圆柱体底面半径：" << endl;          
	cin >> r;                                          //输入半径
	cout << "请输入圆柱体的高：" << endl;
	cin >> h;                                          //输入高
	cout << "体积：";
	cout << PI * pow(r,2) << endl;                     //计算并输出体积
	cout << "表面积：";
	cout << 2 * PI * pow(r,2) + 2 * PI * r * h << endl;//计算并输出表面积
	return 0;
}