// 多态
// C++多态(polymorphism)是通过虚函数来实现的，虚函数允许子类重新定义成员函数，而子类重新定义父类的做法称为覆盖(override)，或者称为重写。
// 最常见的用法就是声明基类的指针，利用该指针指向任意一个子类对象，调用相应的虚函数，动态绑定。
// 由于编写代码的时候并不能确定被调用的是基类的函数还是哪个派生类的函数，所以被成为“虚”函数。
// ***如果没有使用虚函数的话，即没有利用C++多态性，则利用基类指针调用相应的函数的时候，将总被限制在基类函数本身，
// ***而无法调用到子类中被重写过的函数。
// #include<iostream>  
// using namespace std;  
  
// class A  
// {  
// public:  
//     void foo()  
//     {  
//         printf("1\n");  
//     }  
//     virtual void fun()  
//     {  
//         printf("2\n");  
//     }  
// };  
// class B : public A  
// {  
// public:  
//     void foo()  //隐藏：派生类的函数屏蔽了与其同名的基类函数
//     {  
//         printf("3\n");  
//     }  
//     void fun()  //多态、覆盖
//     {  
//         printf("4\n");  
//     }  
// };  
// int main(void)  
// {  
//     A a;  
//     B b;  
//     A *p = &a;  
//     p->foo();  //输出1***
//     p->fun();  //输出2
//     p = &b;  
//     p->foo();  //取决于指针类型，输出1***
//     p->fun();  //取决于对象类型，输出4，体现了多态
//     return 0;  
// } 

// C++保留字override
// override 仅在成员函数声明之后使用时才是区分上下文的且具有特殊含义；
// 否则，它不是保留的关键字。使用 override 有助于防止代码中出现意外的继承行为。
// 以下示例演示在未使用override 的情况下，可能不打算使用派生类的成员函数行为。编译器不会发出此代码的任何错误



#include<iostream>
using namespace std;
 
class A {
public:
	virtual void vfunc1() { cout << "A::vfunc1()" << endl; };
	virtual void vfunc2() { cout << "A::vfunc2()" << endl; };
	void func1() { cout << "A::func1()" << endl; };
	void func2() { cout << "A::func2()" << endl; };
private:
	int data1_;
	int data2_;
};
 
class B :public A {
public:
	virtual void vfunc1() override { cout << "B::vfunc1()" << endl; };
	void func2() { cout << "B::func2()" << endl; };
private:
	int data3_;
};
 
class C :public B {
public:
	virtual void vfunc1() override { cout << "C::vfunc1()" << endl; };
	void func2() { cout << "C::func2()" << endl; };
private:
	int data1_, data4_;
};
 
//演示了手动调用虚函数的过程
int main() {
	B a;
	typedef void(*Fun)(void);  // 函数指针
	Fun pFun = nullptr;
	cout << "虚函数表地址：" << (int*)(&a) << endl;
	cout << "虚函数表第1个函数地址："<<(int*)*(int*)(&a) << endl;
	cout << "虚函数表第2个函数地址：" << (int*)*(int*)(&a) + 1 << endl;
	pFun = (Fun)*((int*)*(int*)(&a));
	pFun();
	pFun = (Fun)*((int*)*(int*)(&a) + 1);
	pFun();
	return 0;
}