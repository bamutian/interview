//// niuekTest.cpp : 定义控制台应用程序的入口点。
////
//
//#include "stdafx.h"
//#include "DHThreadPool.h"
//#include<iostream>
//using namespace std;
//using namespace dhtpl;
//
//#define ADD(x) x+x
//
//
//class A
//{
//public:
//	A();
//	~A();
//	void test(){
//		printf("test A");
//	}
//
//private:
//
//};
//
//
//
//static void testPool(int id)
//{
//	cout << "fdsa";
//}
//
//
//void getMemory(int** p)
//{
//	cout << *p << endl;
//}
//
//
//char* getStr()
//{
//	char p[] = "hello world";
//	return p;
//
//}
//int _tmain(int argc, _TCHAR* argv[])
//{
//	DHThreadPool pool = DHThreadPool(2);
//	pool.push(testPool);
//	/*int a = 1;
//	int* str = &a;
//	getMemory(&str);*/
//
//	////// 定义简单的lambda表达式
//	////auto basicLambda = [] { cout << "Hello, world!" << endl; };
//	////basicLambda();
//	////// 调用
//	//char * str=NULL;
//	//str = getStr();
//	//cout << str[1] << endl;
//	//getchar();
//	return 0;
//}
//
