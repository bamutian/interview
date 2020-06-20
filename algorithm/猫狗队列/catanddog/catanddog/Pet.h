#pragma once
#include <iostream>

using namespace std;

class Pet
{
public:
	Pet();
	Pet(string type);
	~Pet();
public:
	string getPetType();
private:
	string type;
};

