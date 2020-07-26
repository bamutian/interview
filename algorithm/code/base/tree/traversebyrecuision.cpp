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



int main()
{
    printf("Hello World\n");
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
	
	cout << "end..." << endl;
    system("pause");
    return 0;
}