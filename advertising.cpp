#include "StdAfx.h" 
#include "advertising.h" 
#include <iostream>
using namespace std;
Advertising::Advertising(void)
{
	cout << "вызывается конструктор рекламы" << endl;
}
Advertising::~Advertising(void)
{
	cout << "вызывается деструктор рекламы" << endl;
}
void Advertising::Show()
{
	cout << "Реклама духов"<<endl;
}
