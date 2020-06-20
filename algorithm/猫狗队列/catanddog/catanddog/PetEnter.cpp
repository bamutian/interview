#include "stdafx.h"
#include "PetEnter.h"


PetEnter::PetEnter()
{
}

PetEnter::PetEnter(Pet pet, int count)
{
	this->pet = pet;
	this->conut = count;

}


PetEnter::~PetEnter()
{
}


Pet PetEnter::getPet()
{
	return this->pet;
}

long PetEnter::getCount()
{
	return this->conut;
}

string PetEnter::getEnterPetType()
{
	return pet.getPetType();
}