// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "tvshow.h"
#include "film.h"
#include "news.h"
#include "featurefilm.h"
#include "cartoon.h"
#include "advertising.h"
#include "producer.h"
#include "List.h"
#include <iostream>
#include "locale"
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_CTYPE, "Russian");

	
	List list;
	Film *a;
	a = new Film();
	 list.Insert(a);
	cout << endl;
	cout << endl;



	News *b;
	b = new News();
	list.Insert(b);
	cout << endl;
	cout << endl;


	FeatureFilm *c;
	c = new FeatureFilm;
	list.Insert(c);
	cout << endl;
	cout << endl;


	Cartoon *d;
	d = new Cartoon;
	list.Insert(d);
	cout << endl;
	cout << endl;


	Advertising *f;
	f = new Advertising;
	list.Insert(f);
	cout << endl;
	cout << endl;

	Producer g;
	g.setname("Маргарита");
	g.getname();
	cout << endl;
	cout << endl;

	list.Show();
	cout << endl;
	cout << endl;
	return 0;
}

