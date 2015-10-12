#include "StdAfx.h" 
#include "cartoon.h" 
#include <iostream>
using namespace std;
Cartoon::Cartoon(void)
{
	cout << "вызывается конструктор мультфильма" << endl;
}
Cartoon::~Cartoon(void)
{
	cout << "вызывается деструктор мультфильма" << endl;
}
void Cartoon::Show()
{
	cout << "Мультфильм под названием Adventure time"<<endl;
}
