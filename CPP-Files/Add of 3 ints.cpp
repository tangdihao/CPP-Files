/**
 * @name    Add of 3 ints.cpp
 * @author  tangdihao
 * @version 1.0.0
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
    int c;//定义三个整数
    cout << "Please enter your number1:" << endl;
    cin >> a;//输入第一个数
    cout << "Please enter your number2:" << endl;
    cin >> b;//输入第二个数
    cout << "please enter your number3:" << endl;
    cin >> c;//输入第三个数
    cout << "-------------------------" << endl;//分割线
    cout << "The anwser is:" << a + b + c << endl;//将三个数相加求和
    return 0;
}
