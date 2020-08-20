#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
//#include <stdio.h>
#include <string.h>
using namespace std;

struct Node{
    int data;
    Node*next;
};


bool IsEloop(Node*head)
{
    if(head==NULL || head->next==NULL)
    {
        return false;
    }
    Node*slow = head,*fast=head;
    while(fast&&fast->next)
    {
        slow=slow->next;
        fast = fast->next->next;
        if(slow==fast)
        {
            break;
        }
    }
    return !(fast==NULL || fast->next==NULL);
}


bool loop(Node* head)
{
    if (head == NULL || head->next == NULL)
    {
        return false;
    }
    Node * fast = head;
    Node* slow = head;
    while (fast->next && fast->next->next)
    {
        /* code */
        fast = fast->next->next;
        slow = slow->next;
        if (fast==slow)
        {
           return true;
        }
        
    }
    return false;
    
}

/* 环形链表 */

int main()
{
    bool flag;
    string strs("");
    getline(cin, strs);
    vector<int> vstr;
	char* ptr = strtok((char*)strs.c_str(), " ");
	while (ptr != NULL){
		vstr.push_back(atoi(std::string(ptr).c_str()));
		ptr = strtok(NULL, " ");
    }


    Node*cur = NULL;
    Node*head = NULL;
    Node* node = (Node*)malloc(sizeof(Node));
    node->data = vstr[0];
    head = cur = node;
    for (int i = 1; i < vstr.size(); i++)
    {
        /* code */
        Node *node = (Node *)malloc(sizeof(Node));
        node->data=vstr[i];
        cur->next=node;
        cur = node;
    }
    cur->next=head;
    flag = IsEloop(head);
    if (flag)
    {
        /* code */
        cout<<"true";
    }else
    {
        cout<<"false";
    }
    
    
    //cout<<flag;

}