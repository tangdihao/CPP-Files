/**
 * @name    �ж��̷�.cpp
 * @author  tangdihao
 * @version 1.0.0
 * --------------------------------
 * �ж�������̷��Ƿ�����A-Z������
 * --------------------------------
 * Copyright (c) 2019 by tangdihao.
 * All Rights Reserved.
 */

#include <iostream>
using namespace std;

int main(void)
{
    while (true) {                              //����ѭ��
        cout << "������һ���̷�������Ƿ�Ϸ���";
    	char disk = '\0';                       //���̷���ֵ��Ϊ��ֵ
    	cin >> disk;                            //�����̷�

    	if (disk >= 'A' && disk <= 'Z')         //�ж�������̷��Ƿ���A-Z֮��
    	{
    		cout << "��ȷ\n" << endl;           //��������
    	}
    	else
    	{
    		cout << "����\n" << endl;           //����������
    	}
    }
	return 0;
}
