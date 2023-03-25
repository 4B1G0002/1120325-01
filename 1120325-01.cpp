// 1120325-01.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
// 指標

#include <iostream>
using namespace std;

int main()
{
    int var = 20;
    int* ip;
    ip = &var;

    cout << "var = " << var << endl;
    cout << "$var = " << &var << endl;
    cout << "ip = " << ip << endl;
    cout << "*ip = " << *ip << endl;

    int** ipp;
    ipp = &ip;
    cout << "ipp=  " << ipp << endl;
    cout << "*ipp = " << *ipp << endl;
}