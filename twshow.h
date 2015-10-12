#pragma once 



class TVshow 
{
	char *nazvanie;
protected:
	static TVshow *head;
public:
	TVshow *next;
	TVshow(void);
		virtual ~TVshow(void);
		virtual void Show(void) = 0;

};

