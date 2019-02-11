/**
 * @name    立方体计算.cpp
 * @author  tangdihao
 * @version 1.0.0
 * --------------------------------
 * 计算立方体的体积和表面积
 * --------------------------------
 * Copyright (c) 2019 by tangdihao.
 * All Rights Reserved.
 */
 
 #include <iostream>
 #include <cmath>
 using namespace std;
 
 int main()
 {
 	double a;
 	cout << "请输入立方体的棱长：" << endl;
 	cin >> a;
 	cout << "体积：";
 	cout << pow(a,3) << endl;
 	cout << "表面积：";
 	cout << 6 * pow(a,2) << endl;
 	return 0;
 }

