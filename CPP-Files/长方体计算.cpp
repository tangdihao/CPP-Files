/**
 * @name    ���������.cpp
 * @author  tangdihao
 * @version 1.0.0
 * --------------------------------
 * ���㳤���������ͱ����
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
	double c;//���������ⳤ
	cout << "�����볤����ĵ�һ���ⳤ��" << endl;
    cin >> a;//�����һ���ⳤ
    cout << "�����볤����ĵڶ����ⳤ��" << endl;
    cin >> b;//����ڶ����ⳤ
    cout << "�����볤����ĵ������ⳤ��" << endl;
    cin >> c;//����������ⳤ
    cout << "�����";
    cout << a * b * c << endl;//���㲢������
    cout << "�������";
    cout << (a * b + a * c + b * c) * 2 << endl;//���㲢��������
    return 0;
 }
