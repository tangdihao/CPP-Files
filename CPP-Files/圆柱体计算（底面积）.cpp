/**
 * @name    Բ������㣨�������.cpp
 * @author  tangdihao
 * @version 1.0.0
 * --------------------------------
 * ��֪�������Բ���������ͱ����
 * --------------------------------
 * Copyright (c) 2019 by tangdihao.
 * All Rights Reserved.
 */

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	const double PI = 3.14;                           //���峣��Բ����
	double s;                                         //��ʼ�������
	double h;                                         //��ʼ����
	cout << "������Բ����ĵ������" << endl;
	cin >> s;                                         //��������
	cout << "������Բ����ĸߣ�" << endl;
	cin >> h;                                         //�����
	cout << "�����";
	cout << s * h << endl;                            //���㲢������
	cout << "�������";  
	cout << 2 * PI * sqrt(s / PI) * h + 2 * s << endl;//���㲢��������
	return 0;	
} 