#include<bits/stdc++.h>

using namespace std;


int main(){

    //  创建，插入，遍历
    /* 
    map<string, float> a;
	a["hehe"] = 12.5;
	a["xixi"] = 89.6;
	map<string, float>::iterator it;
	for(it = a.begin(); it != a.end(); it++)
		cout<<(*it).first<<' '<<(*it).second<<endl;
	a["hehe"] = 45.2;
	cout<<"修改后的hehe的值："<<a["hehe"]<<endl;
     */

    /* 
    begin()         返回指向map头部的迭代器
     clear(）        删除所有元素
     count()         返回指定元素出现的次数
     empty()         如果map为空则返回true
     end()           返回指向map末尾的迭代器
     equal_range()   返回特殊条目的迭代器对
     erase()         删除一个元素
     find()          查找一个元素
     get_allocator() 返回map的配置器
     insert()        插入元素
     key_comp()      返回比较元素key的函数
     lower_bound()   返回键值>=给定元素的第一个位置
     max_size()      返回可以容纳的最大元素个数
     rbegin()        返回一个指向map尾部的逆向迭代器
     rend()          返回一个指向map头部的逆向迭代器
     size()          返回map中元素的个数
     swap()           交换两个map
     upper_bound()    返回键值>给定元素的第一个位置
     value_comp()     返回比较元素value的函数

     */

    // 创建1
    /* 
    map<int, string> mapStudent;  
    mapStudent.insert(pair<int, string>(1, "student_one"));  
    mapStudent.insert(pair<int, string>(2, "student_two"));  
    mapStudent.insert(pair<int, string>(3, "student_three"));  
    map<int, string>::iterator iter;  
    for(iter = mapStudent.begin(); iter != mapStudent.end(); iter++)  
       cout<<iter->first<<' '<<iter->second<<endl;  
     */

    // 创建2
    /* 
    map<int, string> mapStudent;  
    mapStudent.insert(map<int, string>::value_type (1, "student_one"));  
    mapStudent.insert(map<int, string>::value_type (2, "student_two"));  
    mapStudent.insert(map<int, string>::value_type (3, "student_three"));  
     */

    // 创建3

    /* 
    map<int, string> mapStudent;  
    mapStudent[1] = "student_one";  
    mapStudent[2] = "student_two";  
    mapStudent[3] = "student_three"; 
     */

    return 0;
}
