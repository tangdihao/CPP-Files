/**
 * @name    进制输出.cpp
 * @author  tangdihao
 * @version 1.0.1
 * --------------------------------
 * 将一个整数转化成不同的进制并输出
 * --------------------------------
 * Copyright (c) 2019 by tangdihao.
 * All Rights Reserved.
 */

#include <iostream>
using namespace std;

int main()
{
    cout << "请输入一个整数：" << endl;
    int x;//定义整形变量
    cin >> x;//输入整数
    cout << "八进制：" << oct << x << endl;//输出八进制
    cout << "十进制：" << dec << x << endl;//输出十进制
    cout << "十六进制：" << hex << x << endl;//输出十六进制
    return 0;
}
