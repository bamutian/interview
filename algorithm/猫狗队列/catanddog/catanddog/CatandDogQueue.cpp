#include "stdafx.h"
#include "CatandDogQueue.h"


CatandDogQueue::CatandDogQueue()
{
	this->count = 0;
}


CatandDogQueue::~CatandDogQueue()
{
}


void CatandDogQueue::add(Pet pet)
{

	if (pet.getPetType()== "dog")
	{
		this->dog.push(PetEnter(pet, this->count++));
	}else if (pet.getPetType()== "cat")
	{
		this->cat.push(PetEnter(pet, this->count++));
	}
	else{
		throw runtime_error("�������");
	
	}

}

Dog CatandDogQueue::pollDog()
{

	if (!this->isDogQueueEmpty())
	{
		Pet pet = (this->dog.front().getPet());
		Dog tmp;
		Pet *p = &tmp;
		*p = pet;
		this->dog.pop();
		return tmp;
	}
	else
	{
		throw runtime_error("������Ϊ��");
	}
}
Cat CatandDogQueue::pollCat()
{
	if (!this->isCatQueueEmpty())
	{
		Pet pet = (this->cat.front().getPet());
		Cat tmp;
		Pet *p = &tmp;
		*p = pet;
		this->dog.pop();
		return tmp;
	}
	else
	{
		throw runtime_error("������Ϊ��");
	}

}


bool CatandDogQueue::isDogQueueEmpty()
{
	return this->dog.empty();
}

bool CatandDogQueue::isCatQueueEmpty()
{

	return this->cat.empty();
}

bool CatandDogQueue::isEmpty()
{
	return (this->dog.empty() && this->cat.empty());
}


Pet CatandDogQueue::pollAll()
{
	if (!dog.empty() && !cat.empty())//������߶���Ϊ�գ�����ʱ����С���ε���
	{
		if (dog.front().getCount() < cat.front().getCount())
		{
			Pet tmp;
			tmp = dog.front().getPet();
			dog.pop();
			return tmp;
		}
		else
		{
			Pet tmp;
			tmp = cat.front().getPet();
			cat.pop();
			return tmp;
		}
	}
	else if (!dog.empty())
	{
		Pet tmp;
		tmp = dog.front().getPet();
		dog.pop();
		return tmp;
	}
	else if (!cat.empty())
	{
		Pet tmp;
		tmp = cat.front().getPet();
		cat.pop();
		return tmp;
	}
	else
	{
		throw runtime_error("Error ,empty queue!");
	}

}
