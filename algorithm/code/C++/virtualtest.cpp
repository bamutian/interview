// #include<iostream>
// using namespace std;

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