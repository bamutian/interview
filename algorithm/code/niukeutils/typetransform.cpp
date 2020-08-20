#include <bits/stdc++.h>
using namespace std;

int main(){


    // string->const char*
    string str("123");
    const char * cstr = str.c_str();
    cout<<"string to const char * "<<str<<endl;


    // const char * ->string
    const char* cstr2= "456";
    string str2(cstr2);
    cout<<"const char * to string "<<str2<<endl;

    // int-> string
    string str3 = to_string(789);
    cout<<"int to string "<<str3<<endl;

    // string to int 
    string str4("234");
    int ia = atoi(str4.c_str());
    cout << "string to int ";
    cout << ia << endl;

    //   char* to string
    char * cstr3 = "999";
    string str5(cstr3);
    cout<<"string to char* "<<str5<<endl;


    // string  to char*
    string str6("888");
    char *cstr4 = new char[100];
    strcpy(cstr4,str6.c_str());
    cout<<"string to char* "<<cstr4<<endl;



    // int to char*
    int ia1 = 222;
    char *cstr5 = new char[100];
    itoa(ia1, cstr5,10); //10 代表的是10 进制
    cout<< "int to char* "<<cstr5<<endl;


    // char * to int 
    char * cstr6 = new  char[100];
    cstr6 = "333";
    int ia3 = atoi(cstr6);
    cout<<"char * to int ";
    cout<<ia3<<endl;


    // const char* to char*
    // 1
    const char * scstr2= "123";
    char * cstr7 = new char[100];
    strcpy(cstr7,scstr2);
    cout<<"const char * ton char*"<<cstr7<<endl;
    // 2
    const char *constc = "Hello World!"; //初始化const char* 类型
    char *c = nullptr;                   //初始化char*类型
    c = const_cast<char *>(constc);      //const char*类型转char*类型
    cout<<c<<endl;

    // // char * to const char*
    char *cc = "HelloWorld!222";      //初始化char* 类型，并具体赋值
    const char *constcc = nullptr; //初始化const char* 类型
    constcc = cc;                   //char*类型转const char* 类型
    cout<<constcc<<endl;



    //char [] 转其他类型
    char arrc[20] = "HelloWorld!"; //初始化char[] 类型，并具体赋值
    std::string str;               //初始化string
    const char *constc = nullptr;  //初始化const char*
    char *c = nullptr;             //初始化char*

    str = arrc;    //char[]类型转string类型
    constc = arrc; //char[]类型转const char* 类型
    c = arrc;      //char[]类型转char*类型

    // const char *转char[] 
    const char *constc = "Hello World!"; //初始化const char* 类型
    char arrc[20] = {0};                 //初始化char[]类型，并赋值为空
    strncpy_s(arrc, constc, 20);         //const char*类型转char[]类型
    printf_s("%s\n", constc);            //打印const char* 类型数据
    printf_s("%s\n", arrc);              //打印char[]类型数据

    // char*转char[]
    char *c = "HelloWorld!"; //初始化char* 类型，并具体赋值
    char arrc[20] = {0};     //初始化char[] 类型，并具体赋值
    strncpy_s(arrc, c, 20);  //char*类型转char[] 类型
    printf_s("%s\n", c);     //打印char* 类型数据
    printf_s("%s\n", arrc);  //打印char[]类型数据

    return 0;
}
