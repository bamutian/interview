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


// 后序遍历
// 用两个栈实现  模仿先序遍历
template<typename T>
void posOrderStack(Node<T>* head)
{	
	stack<Node<T>*> s1;
	stack<Node<T>*> s2;

	if(head !=NULL)
	{
		s1.push(head);
		while (!s1.empty())
		{
			head = s1.top();
			s1.pop();
			s2.push(head);
			if (head->left!=NULL)
			{
				s1.push(head->left);
			}
			
			if (head->right!=NULL)
			{
				s1.push(head->right);
			}
			while(!s2.empty())
			{
				Node<T>* node;
				node = s2.top();
				cout << node->value << "\n";
				s2.pop();
			}
			
		}
		

	}

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
    posOrderStack<int>(&one);
    system("pause");
    return 0;
}


