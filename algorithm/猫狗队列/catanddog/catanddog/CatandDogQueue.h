#pragma once
#include <iostream>
#include <queue>
#include "PetEnter.h"
#include "Dog.h"
#include "Cat.h"
using namespace std;

class CatandDogQueue
{
public:
	CatandDogQueue();
	~CatandDogQueue();

private:
	queue<PetEnter> dog;
	queue<PetEnter> cat;
	int count;
public:
	void add(Pet pet);
	Dog pollDog();
	Cat pollCat();
	bool isDogQueueEmpty();
	bool isCatQueueEmpty();
	bool isEmpty();
	Pet pollAll();
	

};

