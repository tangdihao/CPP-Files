/**
 * @name    Output_base.cpp
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
    cout << "Please enter an integer:" << endl;
    int x;
    cin >> x;
    cout << "Octal:" << oct << x << endl;
    cout << "Decimal:" << dec << x << endl;
    cout << "Hexadecimal:" << hex << x << endl;
    return 0;
}
