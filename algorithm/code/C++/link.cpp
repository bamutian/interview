#include<bits/stdc++.h>
using namespace std;

typedef struct Node
{
    int data;          // 存储链表数据
    struct Node *next; //  存储结点的地址
} *Linklist;

void Illustrate(Linklist head)
{
    Linklist tem = head; //  将头指针的地址赋给临时的指针
    while (tem->next != NULL)
    {                    //  指向最后一个结点的指针域时会停止
        tem = tem->next; //  结点不断向后移动
        printf("%d\n", tem->data);
    }
}


Linklist Creat_list(Linklist head)
{
    head = (Linklist)malloc(sizeof(Node));  //  为头指针开辟内存空间
    Node *node = NULL;                      //  定义新结点
    int count = 0;                          //  创建结点的个数
    head->next = NULL;
    printf("Input the node number: ");
    scanf("%d", &count);
    for (int i = 0; i < count; i++)
    {
        node = (Linklist)malloc(sizeof(Node));  //  为新结点开辟内存空间
        node->data = i;                         //  为新结点的数据域赋值
        node->next = head->next;                //  将头指针所指向的下一个结点的地址，赋给新创建结点的next
        head->next = node;                      //  将新创建的结点的地址赋给头指针的下一个结点
    }
    return head;
}

Linklist Creat_list2(Linklist head)
{
    head = (Linklist)malloc(sizeof(Node));  //  为头指针开辟内存空间
    Linklist node = NULL;                   //  定义结点
    Linklist end = NULL;                    //  定义尾结点
    head->next = NULL;                      //  初始化头结点指向的下一个地址为 NULL
    end = head;                             //  未创建其余结点之前，只有一个头结点
    int count = 0;                          //  结点个数
    printf("Input node number: ");
    scanf("%d", &count);
    for (int i = 0; i < count; i++)
    {
        node = (Linklist)malloc(sizeof(Node));  //  为新结点开辟新内存
        node->data = i;                         //  新结点的数据域赋值
        end->next = node;
        end = node;
    }
    end->next = NULL;
}

int main(){
    Linklist head = NULL;    //  链表的头指针
    head = Creat_list(head); //  创建链表
    Illustrate(head);        //  输出每个结点的数据域
    system("pause");
    return 0;

    return 0;
}
