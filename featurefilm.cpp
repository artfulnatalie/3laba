#include "StdAfx.h" 
#include "featurefilm.h" 
#include <iostream>
using namespace std;
FeatureFilm::FeatureFilm(void)
{
	cout << "вызывается конструктор художественного фильма" << endl;
}
FeatureFilm::~FeatureFilm(void)
{
	cout << "вызывается деструктор художественного фильма" << endl;
}
void FeatureFilm::Show()
{
	cout << "Какой нибудь интересный фильм"<<endl;
}
