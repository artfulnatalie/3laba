#pragma once

class Producer 
{

	char *name;

public:
	Producer(void);
	void setname(char *name);
	void getname();

	~Producer(void);
};
