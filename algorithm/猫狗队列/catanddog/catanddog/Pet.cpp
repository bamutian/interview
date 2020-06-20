#include "stdafx.h"
#include "Pet.h"


Pet::Pet()
{
}

Pet::Pet(string type)
{
	this->type = type;

}

string Pet::getPetType()
{
	return this->type;

}
Pet::~Pet()
{
}
