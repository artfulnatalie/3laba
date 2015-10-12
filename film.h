#pragma once


#include "tvshow.h"

class Film:
	public TVshow
{
public:
	virtual void Show(void);
	Film(void);
	virtual ~Film(void);
};
