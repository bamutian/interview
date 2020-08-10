#include "common.h"



// 后继节点（中序遍历中一个数的后面的节点）
//思路：1,如果一个节点有右子树，那么是右子树最左的节点
// 2,如果没有右子树，那么是那个节点左子树的最后一个节点
template<typename T>
NodeParent<T>* getSuccessorNode(NodeParent<T> *node)
{
	if(node == NULL)
	{
		return node;
	}
	if(node->left != NULL)
	{
		return getleftMost(node->right);
	}else{
		NodeParent<T> *parent = node->parent;
		while (parent != NULL && parent->left != node)
		{ //parent != NULL 控制最右的孩子
			/* code */
			node = parent;
			parent = node->parent;
		}
		return parent;
		
	}


}


template<typename T>
NodeParent<T>* getleftMost(NodeParent<T> *node)
{

	if(node==NULL)
	{
		return node;
	}
	while(node->left!=NULL)
	{
		node = node->left;
	}
	return node;
}


template<typename T>
string serialByPre(Node<T> *head)
{
	if(head==NULL)
	{
		return "#_";
	}
	string res = to_string(head->value)+"_";
	res += serialByPre(head->left);
	res += serialByPre(head->right);
	return res;

}


// 判断是否是平衡二叉树，
// 分析下面的判断条件 可能性
// 1，左树平衡
// 2，右树平衡
// 3，左树高度
// 4，右树高度
// 设计递归返回结构 整理返回值类型
// 1，这个树是否平衡
// 2，树的高度是多少
class Returndata
{
	public:
		bool isB;
		int h;
		Returndata(bool isB, int h)
		{
			this->isB = isB;
			this->h = h;
		}
	
};


template<typename T>
Returndata process(Node<T> *head)
{
	if(head==NULL)
	{
		return Returndata(true,0);
	}
	Returndata leftData = process(head->left);
	if(!leftData.isB)
	{
		return Returndata(false,0);
	}
	Returndata rightData = process(head->right);
	if(!(rightData.isB))
	{
		return Returndata(false,0);
	}

	if (abs(leftData.h-rightData.h)>1)
	{
		return Returndata(false,0);
	}
	
	
	return Returndata(true,max(leftData.h,rightData.h+1));

}


// 判断一棵树是否是搜索二叉树，任何一个节点的值左子树都比右子树小 二叉树遍历的结果依次升序的就是搜索二叉树
// 可以借助中序遍历的非递归实现，在打印的时候判当前节点和前一个节点的值是否符合搜索二叉树
// 判断一颗树是否是完全二叉树   堆就是完全二叉树
//  二叉树按层遍历，
// 1，如果一个节点有右孩子，没有左孩子，那么不是
// 2，如果一个节点没有左右，或者有左没有右，那么后面的节点都应该是叶节点




// 已知一颗完全二叉树，求其节点的个数
// 要求时间复杂度低于o(n)，N为这颗树的节点个数
// 1，判断右子树的高度是否和左子树一样，如果一样，那么，左子树就是满二叉树，然后右树是一个完全二叉树
// 2，如果不一样，那么右子树是满二叉树，左树是一个完全二叉树。





int main()
{
	printf("Hello World\n");
    // NodeParent<int> one;
	// NodeParent<int> two;
	// NodeParent<int> three;
	// NodeParent<int> four;
	// NodeParent<int> five;
	// NodeParent<int> six;
	// NodeParent<int> seven;
	// one.value = 1;
	// two.value = 2;
	// three.value = 3;
	// four.value = 4;
	// five.value = 5;
	// six.value = 6;
	// seven.value = 7;
	// one.left = &two;
	// one.right = &three;
	// one.parent=NULL;
	// two.left = &four;
	// two.right = &five;
	// two.parent = &one;
	// three.left = NULL;
	// three.right = &six;
	// three.parent = &one;
	// four.left = &seven;
	// four.right = NULL;
	// four.parent=&two;
	// five.left = NULL;
	// five.right = NULL;
	// five.parent =&two;
	// six.left = NULL;
	// six.right = NULL;
	// six.parent = &three;
	// seven.left = NULL;
	// seven.right = NULL;
	// seven.parent = &four;
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

	// string res = serialByPre(&one);
	// cout<<res<<"\n";
	// Display(&one,0);
	bool isb = process(&one).isB;
	printf("%b",isb);
	cout<<isb<<"\n";
    return 0;
}