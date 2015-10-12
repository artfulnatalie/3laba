#pragma once
#include "tvshow.h"

class List
{
public:

	List()

	{
		begin = 0;
	}
	virtual ~List();
	virtual void Insert(TVshow *);
	virtual void Show(void);
private:
	TVshow *begin;
};
