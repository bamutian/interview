#include "stdafx.h"
#include <iostream> 
 
using namespace std;
class Internet
{
public:
	Internet(char *name, char *address) // ��Ϊ��internet(const char *name , const char *address)
	{
		strcpy(Internet::name, name);
		strcpy(Internet::address, address);
	}
	friend void ShowN(Internet &obj);   //��Ԫ���������� 
	private:// ��Ϊprivate
	char name[20];
	char address[20];
};

void ShowN(Internet &obj)        //������ͨ�������壬����a����ı�����Աname,����д��,void Internet::ShowN(Internet &obj) 
{
	cout << obj.name << endl;          //�ɷ���internet���еĳ�Ա
}
void main()
{
	Internet a("�ȸ�", "http://www.google.cn/");
	ShowN(a);
	cin.get();
}