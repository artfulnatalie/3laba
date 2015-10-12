#pragma once


#include "tvshow.h"

class Advertising :
	public TVshow
{
public:
	virtual void Show(void);
	Advertising(void);
	virtual ~Advertising(void);
};
