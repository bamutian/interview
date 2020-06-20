#pragma once
#include "Pet.h"
class PetEnter
{
public:
	PetEnter();
	PetEnter(Pet pet, int count);
	~PetEnter();

private:
	int conut;
	Pet pet;
public:
	Pet getPet();
	long getCount();
	string getEnterPetType();
};

