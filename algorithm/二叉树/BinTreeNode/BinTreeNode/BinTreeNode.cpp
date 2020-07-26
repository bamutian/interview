// BinTreeNode.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
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


// 先序遍历 递归方式
template<typename T>
void preOrderRecur(Node<T>* node){
	
	if (node == NULL)
	{
		return;
	}
	cout << node->value << "\n";
	preOrderRecur(node->left);
	preOrderRecur(node->right);

}

// 中序遍历 递归方式
template<typename T>
void midOrderRecur(Node<T>* node){
	if (node == NULL)
	{
		return;
	}
	
	preOrderRecur(node->left);
	cout << node->value << "\n";
	preOrderRecur(node->right);

}

// 后序遍历 递归方式
template<typename T>
void lateOrderRecur(Node<T>* node){
	if (node == NULL)
	{
		return;
	}
	
	preOrderRecur(node->left);
	preOrderRecur(node->right);
	cout << node->value << "\n";

}

//先序排序，非递归方式，用栈实现
template<typename T>
void preOrderStack(Node<T>* node)
{
	
	stack<Node<T>*> s;
	if (node!=NULL)
	{
		s.push(node);
		while (!s.empty())
		{
			node = s.top();
			s.pop();
			cout << node->value << "\n";
			if (node->right != NULL)
			{
				s.push(node->right);
			}

			if (node->left != NULL)
			{
				s.push(node->left);
			}
		}
		

	}
}

int _tmain(int argc, _TCHAR* argv[])
{
	Node<int> one;
	Node<int> two;
	Node<int> three;
	Node<int> four;
	Node<int> five;
	Node<int> six;
	Node<int> seven;
	one.value = 1;
	two.value = 2;
	three.value = 3;
	four.value = 4;
	five.value = 5;
	six.value = 6;
	seven.value = 7;

	one.left = &two;
	one.right = &three;
	two.left = &four;
	two.right = &five;
	three.left = NULL;
	three.right = &six;
	four.left = &seven;
	four.right = NULL;
	five.left = NULL;
	five.right = NULL;
	six.left = NULL;
	six.right = NULL;
	seven.left = NULL;
	seven.right = NULL;
	cout << "递归方式实现" << endl;
	preOrderRecur<int>(&one);
	cout << "栈结构实现" << endl;
	preOrderStack<int>(&one);
	
	cout << "end..." << endl;
	return 0;
}

