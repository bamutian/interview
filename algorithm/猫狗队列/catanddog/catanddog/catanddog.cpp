// catanddog.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "CatandDogQueue.h"

int _tmain(int argc, _TCHAR* argv[])
{
	CatandDogQueue cdq;
	if (cdq.isEmpty())
		cout << "All queue is empty!" << endl;
	cdq.add(Dog());
	/*if (!cdq.isDogEmpty())
		cout << "Dog queue is not empty!" << endl;
		if (!cdq.isCatEmpty())
		cout << "Cat queue is not empty!" << endl;*/
	for (int i = 0; i < 2; i++)
	{
		cdq.add(Cat());
		cdq.add(Dog());
	}
	cout << "popAll:" << cdq.pollAll().getPetType().c_str() << endl;
	cout << "popDog:" << cdq.pollDog().getPetType().c_str() << endl;
	cout << "popCat:" << cdq.pollCat().getPetType().c_str() << endl;
	cout << "popAll:" << cdq.pollAll().getPetType().c_str() << endl;
	cout << "popAll:" << cdq.pollAll().getPetType().c_str() << endl;

	if (cdq.isEmpty())
		cout << "All queue is empty!" << endl;

	return 0;
}

