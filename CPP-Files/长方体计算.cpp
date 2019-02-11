/**
 * @name    长方体计算.cpp
 * @author  tangdihao
 * @version 1.0.0
 * --------------------------------
 * 计算长方体的体积和表面积
 * --------------------------------
 * Copyright (c) 2019 by tangdihao.
 * All Rights Reserved.
 */

 #include <iostream>
 using namespace std;

 int main()
 {
 	double a;
 	double b;
	double c;//定义三条棱长
	cout << "请输入长方体的第一条棱长：" << endl;
    cin >> a;//输入第一条棱长
    cout << "请输入长方体的第二条棱长：" << endl;
    cin >> b;//输入第二条棱长
    cout << "请输入长方体的第三条棱长：" << endl;
    cin >> c;//输入第三条棱长
    cout << "体积：";
    cout << a * b * c << endl;//计算并输出体积
    cout << "表面积：";
    cout << (a * b + a * c + b * c) * 2 << endl;//计算并输出表面积
    return 0;
 }
