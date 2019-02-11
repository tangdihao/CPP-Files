/**
 * @name    三个整数相加.cpp
 * @author  tangdihao
 * @version 1.0.0
 * --------------------------------
 * 相加三个整数
 * --------------------------------
 * Copyright (c) 2019 by tangdihao.
 * All Rights Reserved.
 */

#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;
    int c;//定义三个整形变量
    cout << "Please enter your number1:" << endl;
    cin >> a;//输入第一个加数
    cout << "Please enter your number2:" << endl;
    cin >> b;//输入第二个加数
    cout << "please enter your number3:" << endl;
    cin >> c;//输入第三个加数
    cout << "-------------------------" << endl;//分割线
    cout << "The anwser is:" << a + b + c << endl;//把三个整数相加
    return 0;
}
