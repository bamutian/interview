// BinTreeNode.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <stack>
using namespace std;

//����ڵ�
template<typename T>
struct Node{
	T value;
	Node *left;
	Node *right;
};


// ������� �ݹ鷽ʽ
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

// ������� �ݹ鷽ʽ
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

// ������� �ݹ鷽ʽ
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

//�������򣬷ǵݹ鷽ʽ����ջʵ��
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
	cout << "�ݹ鷽ʽʵ��" << endl;
	preOrderRecur<int>(&one);
	cout << "ջ�ṹʵ��" << endl;
	preOrderStack<int>(&one);
	
	cout << "end..." << endl;
	return 0;
}

