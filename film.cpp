#include "StdAfx.h" 
#include "film.h" 
#include <iostream> 
using namespace std;
 
Film::Film(void)
{
	cout << "вызывается конструктор фильма" << endl;
}
Film::~Film(void)
{
	cout << "вызывается деструктор фильма" << endl;
}
void Film::Show()
{
	cout << "Фильм под названием Подолятор"<<endl;
}
