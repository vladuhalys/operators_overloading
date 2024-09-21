#ifndef HUMAN_H
#define HUMAN_H

#include "logger.h"

class Human
{
	string _get_object_as_string() const;
public:
	string fullName;
	Human();
	Human(string name);
	void printName() const;
	~Human();
};
#endif