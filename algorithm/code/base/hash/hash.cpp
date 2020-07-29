 #include <stdio.h>
 #include <windows.h>
 
 usin



//  设计RandomPool结构
// 【题目】设计一种结构，在该结构中有如下三个功能：
// insert（key）：将某个key加入到该结构，做到不重复加入。
// delete（key）：将原本在结构中的某个key移除。 getRandom()：
// 等概率随机返回结构中的任何一个key。
// 【要求】 Insert、 delete和 getRandom方法的时间复杂度都是0（1）
// 要保证hash表连续，在删除一个数时，最后一个填充到这个数，删除最后一个元素。
