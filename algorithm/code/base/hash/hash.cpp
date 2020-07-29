 #include <stdio.h>
 #include <windows.h>
 #include<map>
 #include<string>
 #include<iostream>
 #include <cstdlib>
 #include <ctime>
 
using namespace std;



//  设计RandomPool结构
// 【题目】设计一种结构，在该结构中有如下三个功能：
// insert（key）：将某个key加入到该结构，做到不重复加入。
// delete（key）：将原本在结构中的某个key移除。 getRandom()：
// 等概率随机返回结构中的任何一个key。
// 【要求】 Insert、 delete和 getRandom方法的时间复杂度都是0（1）
// 要保证hash表连续，在删除一个数时，最后一个填充到这个数，删除最后一个元素。

class RandomPool
{
public:
    /* data */
    std::map<string,int> map1;
    std::map<int, string> map2;
    int size;
public:
    RandomPool(){
        this->size=0;

    }
    void add(string str)
    {
        map1.insert(pair<string, int>(str,size));
        map2.insert(pair<int, string>(size,str));
        size++;

    }

    string getRandom()
    {
        if(size==0)
        {
            return NULL;
        }
        srand((unsigned)time(NULL));
        int index = rand()%size;
        auto iter = map2.find(index);
        return iter->second;
    }
    void deleteA(string key)
    {
        //要保证hash表连续，在删除一个数时，最后一个填充到这个数，删除最后一个元素。


    }


};


// 布隆过滤器
void bulongfilter()
{
    int arr [1000];
    int index = 200000;
    int intIndex = index/32;
    int bitIndex = index%32;
    arr[intIndex] = (arr[intIndex]|(1 <<bitIndex ));


}

int main(){

    RandomPool test = RandomPool();
    test.add("liuwang");
    test.add("liu");
    test.add("liuwang1");
    test.add("liu1");
    test.add("liuwang2");
    test.add("liu2");
    test.add("liuwang3");
    test.add("liu3");
    test.add("liuwang14");
    test.add("liu14");
    test.add("liuwang25");
    test.add("liu25");
    string str = test.getRandom();
    cout<<str<<endl;

    printf("hello world");
    system("pause");
    return 0;
}





