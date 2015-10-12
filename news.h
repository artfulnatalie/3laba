#pragma once

#include "tvshow.h"

class News :
	public TVshow
{
public:
	virtual void Show(void);
	News(void);
	virtual ~News(void);
};
