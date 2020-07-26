#include "stdafx.h"
#include <iostream> 
 
using namespace std;
class Internet
{
public:
	Internet(char *name, char *address) // 改为：internet(const char *name , const char *address)
	{
		strcpy(Internet::name, name);
		strcpy(Internet::address, address);
	}
	friend void ShowN(Internet &obj);   //友元函数的声明 
	private:// 改为private
	char name[20];
	char address[20];
};

void ShowN(Internet &obj)        //类外普通函数定义，访问a对象的保护成员name,不能写成,void Internet::ShowN(Internet &obj) 
{
	cout << obj.name << endl;          //可访问internet类中的成员
}
void main()
{
	Internet a("谷歌", "http://www.google.cn/");
	ShowN(a);
	cin.get();
}