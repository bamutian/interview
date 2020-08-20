#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

void display(Node *head) // 打印链表
{
    if (head == NULL)
    {
        cout << "the list is empty";
        return;
    }
    else
    {
        Node *p = head;
        while (p != NULL)
        {
            cout << p->data << " \n";
            p = p->next;
        }
    }
}

Node *Init(int num) // 创建链表头插法
{
    if (num <= 0)
        return NULL;
    Node *cur = NULL;
    Node *head = NULL;
    Node *node = (Node *)malloc(sizeof(Node));
    node->data = 1;
    head = cur = node;
    for (int i = 1; i < num; i++)
    {
        Node *node = (Node *)malloc(sizeof(Node));
        node->data = i + 1;
        cur->next = node;
        cur = node;
    }
    cur->next = NULL;
    return head;
}

// 创建链表尾插法
Node* Init2(int num) 
{
    Node *head = (Node *)malloc(sizeof(Node));
    head->data=1;
    Node *p = head;

    //利用尾插法创建一个链表
    for (int i = 1; i < num; i++)
    {
        Node *q = (Node *)malloc(sizeof(Node));
        q->data = i+1;
        p->next = q;
        p = p->next;
    }
    p->next = NULL;
    return head;
}

// 删除链表某个元素
void Delete(Node*head, int da)
{
    Node *p = head, *q = head;
    if (p == NULL)
    {
        cout << "Sorry, The List is Empty!" << endl;
        return;
    }
    while (p != NULL && p->data != da)
    {
        q = p;
        p = p->next;
    }
    q->next = p->next;
    cout << "The Deletion Operation had been finished!" << endl;
}

// 搜索链表某个元素
void Search(Node *head, int da)
{

    Node *p = head;
    if (p == NULL)
    {
        cout << "Sorry, The List is Empty!" << endl;
        return;
    }
    int count = 0;
    while (p != NULL && p->data != da)
    {
        p = p->next;
        count++;
    }
    cout << "the value you want to search is at position %d" << count << endl;
}

void setValueAt(Node *head, int position, int da)
{
    Node *p = head;
    if (p == NULL)
    {
        cout << "The List is Empty!" << endl;
    }
    else
    {
        int posi = 0;
        while (p != NULL && posi != position)
        {
            posi++;
            p = p->next;
        }
        if (p == NULL)
        {
            cout << "There is No Position in this List!" << endl;
        }
        else
        {
            p->data = da;
            cout << "The Value in this position has been Updated!" << endl;
        }
    }
}

int getValueAt(Node *head, int position)
{
    Node *p = head;
    if (p == NULL)
    {
        cout << "The List is Empty!" << endl;
    }
    else
    {
        int posi = 0;
        while (p != NULL && posi != position)
        {
            posi++;
            p = p->next;
        }
        if (p == NULL)
        {
            cout << "There is no value of this position in this List!" << endl;
        }
        else
        {
            cout << "In this Position,the value is" << p->data << endl;
        }
    }
    return p->data;
}


int main(){
    

    // 创建链表
    Node *list = NULL;
    list = Init(10);
    //打印链表
    display(list);
    // 删除链表某个元素
    Delete(list,3);
    display(list);

    return 0;
}
