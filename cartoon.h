#pragma once

#include"tvshow.h"
class Cartoon :
	public TVshow
{
public:
	virtual void Show(void);
	Cartoon(void);
	virtual ~Cartoon(void);
};
