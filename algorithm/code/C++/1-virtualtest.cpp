#include<iostream>
using namespace std;

// class Base
// {
// public:
//     virtual void show() { cout<<" In Base \n"; }
// };

// class Derived: public Base
// {
// public:
//     void show() { cout<<"In Derived \n"; }
// };

// int main(void)
// {
//     // 基类指针指向子类对象
//     Base *bp = new Derived;
//     bp->show();  // RUN-TIME POLYMORPHISM
//     return 0;
// }

// 结论： 虚函数的调用取决于指向或者引用的对象的类型，而不是指针或者引用自身的类型。

// class A
// {
// public:
//     virtual void fun();
// };

// class B
// {
// public:
//    void fun();
// };

// int main(){
    
//     cout<<sizeof(A)<<endl;
//     cout<<sizeof(B)<<endl;
//     // sizeof(A) > sizeof(B) // 因为A比B多了一个虚函数指针
//     // 虚函数的调用取决于指向或者引用的对象的类型，而不是指针或者引用自身的类型
//     return 0;
// }


// #include <iostream>
// using namespace std;

// class Base
// {
// public:
//     virtual void fun ( int x = 0 )
//     {
//         cout << "Base::fun(), x = " << x << endl;
//     }
// };

// class Derived : public Base
// {
// public:
//     // 这里的virtual关键字可以省略，因为只要基类里面被声明为虚函数，那么在子类中默认都是虚的
//     // 或者定义为 virtual void fun ( int x = 10)
//     virtual void fun ( int x=10 )
//     {
//         cout << "Derived::fun(), x = " << x << endl;
//     }
// };


// int main()
// {
//     Derived d1;
//     Derived *bp = &d1;
//     bp->fun();
//     return 0;
// }
// 解析：
// 默认参数不包含在函数签名里。 (函数签名定义了函数的输入与输出，包括参数及参数的类型、返回值及其类型、可能会抛出或传回的exceptions、该方法在面向对象程序中的可用性方面的信息诸如public、static或prototype等关键字等)

// 默认参数是静态绑定的，虚函数是动态绑定的。 默认参数的使用需要看指针或者引用本身的类型，而不是对象的类型。

// 绝不重新定义继承而来的缺省参数（Never redefine function’s inherited default parameters value.）