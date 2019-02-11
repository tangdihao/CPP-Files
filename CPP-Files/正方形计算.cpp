/**
 * @name    正方形计算.cpp
 * @author  tangdihao
 * @version 1.0.1
 * --------------------------------
 * 计算正方形周长和面积
 * --------------------------------
 * Copyright (c) 2019 by tangdihao.
 * All Rights Reserved.
 */
 
#include <iostream>
using namespace std;

int main()
{
    double a;
    cout << "请输入正方形的边长：" << endl;
    cin >> a;//输入边长
    cout << "周长：";
    cout << a * 4 << endl;//计算并输出周长
    cout << "面积：";
    cout << a * a << endl;//计算并输出面积
    return 0;
}
