#pragma once


#include "tvshow.h"

class FeatureFilm :
	public TVshow
{
public:
	virtual void Show(void);
	FeatureFilm(void);
	virtual ~FeatureFilm(void);
};
