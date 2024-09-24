#ifndef HUMAN_H
#define HUMAN_H

#include "logger.h"

class Human
{
	string _get_object_as_string() const;
public:
	string fullName;
	int age = 0;
	Human();
	Human(string name);
	Human(string name, int age);
	explicit Human(const char * name);
    void printName() const;
	~Human();

	Human operator+(Human other_human)
	{
		Logger::debug("Call overloaded operator + ");
		Human human;
		human.fullName = this->fullName + " " + other_human.fullName;
		human.age = (this->age + other_human.age) / 2;
		return human;
	}

	bool operator==(Human other_human)
	{
		Logger::debug("Call overloaded operator == ");
		return this->fullName == other_human.fullName && this->age == other_human.age;
	}
};
#endif

