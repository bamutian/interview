## 1计算字符个数

1-cstringnums.cpp

题目描述：
写出一个程序，接受一个由字母和数字组成的字符串，和一个字符，然后输出输入字符串中含有该字符的个数。不区分大小写。

函数：
1.islower（char c）小写字母a~z
2.isuppter(char c) 大写字母a~z
3.isalnum（）是否是字母或数字
4.isalpha（）是否是字符

int tolower（）转换为小写
int touppter（）转换为大写
用下面的函数用也可以转换大小写
transform(c.begin(), c.end(), c.begin(), ::tolower);

## 字符串分割
•连续输入字符串，请按长度为8拆分每个字符串后输出到新的字符串数组；
•长度不是8整数倍的字符串请在后面补数字0，空字符串不处理。