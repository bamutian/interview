
#include <stdio.h>
#include <windows.h>
#include <iostream>
#include <stack>
using namespace std;

//定义节点
template<typename T>
struct Node{
	T value;
	Node *left;
	Node *right;
};

//定义节点
template<typename T>
struct NodeParent{
	T value;
	NodeParent *left;
	NodeParent *right;
    NodeParent *parent;
};


int vec_left[100] = {0};



// 显示二叉树的函数，只要调用Display(root, 0)即可
template<typename T>
void Display(Node<T>* root, int ident)
{
    if(ident > 0)
    {
        for(int i = 0; i < ident - 1; ++i)
        {
            printf(vec_left[i] ? "│   " : "    ");
        }
        printf(vec_left[ident-1] ? "├── " : "└── ");
    }

    if(! root)
    {
        printf("(null)\n");
        return;
    }

    printf("%d\n", root->value);
    if(!root->left && !root->right)
    {
        return;
    }

    vec_left[ident] = 1;
    Display(root->left, ident + 1);
    vec_left[ident] = 0;
    Display(root->right, ident + 1);
}