/**
 * @name    Բ����.cpp
 * @author  tangdihao
 * @version 1.0.0
 * --------------------------------
 * ����Բ���ܳ������
 * --------------------------------
 * Copyright (c) 2019 by tangdihao.
 * All Rights Reserved.
 */

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double value_radius;//��ʼ���뾶
    const double PI = 3.14;//���峣��Բ����
    cout << "������Բ�İ뾶��" << endl;
    cin >> value_radius;//����뾶
    cout << "�ܳ���";
    cout << 2 * PI * value_radius << endl;//���㲢����ܳ�
    cout << "�����";
    cout << PI * pow(value_radius,2) << endl;//���㲢������
    return 0;
}
