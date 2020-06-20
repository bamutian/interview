#pragma once
#include "Pet.h"
class Dog :
	public Pet
{
public:
	Dog() :Pet("dog"){}
	~Dog();
};

