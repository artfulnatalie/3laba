#include "StdAfx.h" 
#include "producer.h" 
#include <iostream> 
using namespace std; 

Producer::Producer(void)
{
	cout << "вызывается конструктор режиссера" << endl;
}
void Producer::setname(char *name)
{
	this->name = name;
}

void Producer::getname()
{
	cout << "имя режиссера: " << this->name << endl;
}

Producer::~Producer(void)
{
	cout << "вызывается деструктор режиссера" << endl;
}

