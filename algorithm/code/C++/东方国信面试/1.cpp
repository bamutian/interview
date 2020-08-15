

// #include<stdio.h>
// #include<iostream>
// using namespace std;

// class A {

// public:

// int m_value;

// public:

// A(int value) {

// m_value = value;

// }

// void Print1() {

// printf("hello world, print1");

// }

// virtual void Print2() {

// printf("hello world, print2");

// }

// void Print3() {

// printf("%d", m_value);

// }

// };

// int main(int argc, char** argv) {

// A* pA = NULL;


// pA->Print1();

// // pA->Print2();

// // pA->Print3();

// return 0;

// }


// #include <iostream>
// class A {
// private:
// int n1;
// int n2;
// public:
// A(): n2(0), n1(n2 + 2) {}
// void Print() {
// std::cout << "n1: " << n1 << ", n2: " << n2 << std::endl;
// }
// };
// int main(int argc, char** argv) {
// A a;
// a.Print(); return 0;
// }

// #include<stdio.h>
// int SizeOf(char pString[]) {

// return sizeof(pString);

// }

// int main(int argc, char** argv) {

// char* pString1 = "BONC_TEST";

// int size1 = sizeof(pString1);

// int size2 = sizeof(*pString1);

// char pString2[100] = "BONC_TEST";

// int size3 = sizeof(pString2);

// int size4 = SizeOf(pString2);

// printf("%d, %d, %d, %d", size1, size2, size3, size4); return 0;

// }

#include<stdio.h>
#include<vector>
#include<iostream>
#include<time.h>
using namespace std;

// struct Point3D {

// int x;

// int y;

// int z;

// };

// int main() {

// Point3D* pPoint = NULL;
// cout<<pPoint<<endl;

// int  offset = (int)(&((pPoint)->z));

// // printf("%d", offset);

// return 0;

// }

int main() {

srand(time(0));

vector<int> intList(4, 0);

intList.reserve(4);

vector<int>::iterator ivBegin = intList.begin();

vector<int>::iterator ivEnd = intList.end();

for (vector<int>::iterator iter = ivBegin;

iter != ivEnd; iter++) {

*iter = 100 + (rand()%10);

}

for (vector<int>::iterator iter = ivBegin;

iter != ivEnd; iter++) {

if (*iter == 102) {

intList.insert(iter, 121);

} else if (*iter == 100) {

intList.erase(iter);

}

}

for (int i = 0; i < intList.size(); i++) {

cout << "value\t" << i << "\t= " << intList[i] << endl;

}

return 0;

}





// #include <iostream>

// class A {

// public:

// A() {

// std::cout << "A is created." << std::endl;

// Print();

// }

// ~A() {

// std::cout << "A is deleted." << std::endl;

// }

// virtual void Print() {

// std::cout << "A::Print called." << std::endl;

// }

// };

// class B : public A {

// public:

// B() {

// std::cout << "B is created." << std::endl;

// Print();

// }

// ~B() {

// std::cout << "B is deleted." << std::endl;

// }

// virtual void Print() {

// std::cout << "B::Print called." << std::endl;

// }

// };

// int main(int argc, char** argv) {

// A* pA = new B();

// delete pA;

// return 0;

// }
