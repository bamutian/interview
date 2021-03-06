#include <iostream>
#include<memory>
using namespace std;

template<typename T>
struct Node{
	T data;
	unique_ptr<Node<T>> next;
};


template<typename T>
class Link{
public:
	void front(const T& data){
		auto node = make_unique<Node<T>>();
		node->data = data;
		node->next = move(head_.next);
		head_.next = move(node);
	}

	void print()
	{
		Node<T>* node = head_.next.get();
		while (node)
		{
			cout << node->data << " ";
            node = node->next.get();
		}
		cout << endl;
	}
private:
	Node<T> head_;
};



int main(){
	Link<int> lk;


	for (auto val : { 1, 2, 3, 4, 5 })
	{
		lk.front(val);
	}
	lk.print();

	return 0;
}

