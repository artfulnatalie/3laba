#include "StdAfx.h" 
#include "news.h" 
#include <iostream>
using namespace std;
News::News(void)
{
	cout << "вызывается конструктор новостей" << endl;
}
News::~News(void)
{
	cout << "вызывается деструктор новостей" << endl;
}
void News::Show()
{
	cout << " Экстренные новости"<<endl;
}
