/**
 * @name    Բ������㣨�뾶��.cpp
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
	const double PI = 3.14;                            //���峣��Բ����     
	double r;                                          //��ʼ���뾶
	double h;                                          //��ʼ����
	cout << "������Բ�������뾶��" << endl;          
	cin >> r;                                          //����뾶
	cout << "������Բ����ĸߣ�" << endl;
	cin >> h;                                          //�����
	cout << "�����";
	cout << PI * pow(r,2) << endl;                     //���㲢������
	cout << "�������";
	cout << 2 * PI * pow(r,2) + 2 * PI * r * h << endl;//���㲢��������
	return 0;
}