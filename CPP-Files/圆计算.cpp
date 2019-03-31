/**
 * @name    圆计算.cpp
 * @author  tangdihao
 * @version 1.0.0
 * --------------------------------
 * 计算圆的周长和面积
 * --------------------------------
 * Copyright (c) 2019 by tangdihao.
 * All Rights Reserved.
 */

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double value_radius;//初始化半径
    const double PI = 3.14;//定义常量圆周率
    cout << "请输入圆的半径：" << endl;
    cin >> value_radius;//输入半径
    cout << "周长：";
    cout << 2 * PI * value_radius << endl;//计算并输出周长
    cout << "面积：";
    cout << PI * pow(value_radius,2) << endl;//计算并输出面积
    return 0;
}
