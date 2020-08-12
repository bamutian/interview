// 函数重载，重写，隐藏
#include <iostream>
using namespace std;

class A
{
protected:
    int k;
public:
    A(){ k = 3;}
    virtual int  getValue(){return k;}
};

class B:public A
{
public:
    virtual int getValue(){return k*2;}
};

void F(A *p)
{
    cout << p->getValue() << endl;
}

int main()
{
    A *ba = new A;
    B *bp = new B;
    cout << sizeof(ba) << endl;
    cout << sizeof(*ba) << endl;
    F(bp);
    return 0;
}