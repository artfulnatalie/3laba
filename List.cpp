#include "StdAfx.h"
#include "List.h"
#include <iostream>

using namespace std;
List::~List()
{
	TVshow *r;
	while (begin)
	{
		r = begin;
		begin = begin->next;
		delete r;
	}
}
void List::Insert(TVshow*p){
	TVshow *r;
	r = begin;
	begin = p;
	p->next = r;
}
void List::Show(void)
{
	TVshow *r;
	r = begin;
	while (r)
	{
		r->Show();
		r = r->next;
	}
}
