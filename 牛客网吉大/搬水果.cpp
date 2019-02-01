#include<iostream>
#include<queue>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

struct Node {
	int value;
	Node* parent;
};


Node* create(int value,Node* parent) {
	Node* node=new Node;
	node->value=value;
	node->parent=parent;
	return node;
}

class greater_class {
	public:
		bool operator()(Node* a, Node* b) {
			return a->value > b->value;
		}
};


int main() {
	int num,temp;
	priority_queue<Node*,vector<Node*>,greater_class> heap;
	//vector<Node*> temp1;
	cin>>num;
	while(num--) {
		cin>>temp;
		Node* node=create(temp,NULL);
		heap.push(node);
		//temp1.push_back(node);
	}
	//获得所有节点的集合


	int parent=-1;
	int weight=0;
	while(heap.size()>1) {
		Node* n1= heap.top();
		heap.pop();
		Node* n2= heap.top();
		heap.pop();
		weight+=n1->value+n2->value;
		parent=n1->value+n2->value;
		//设置parent域
		Node* parentNode=create(parent,NULL);
		n1->parent=parentNode;
		n2->parent=parentNode;
		heap.push(parentNode);
	}
	
	cout<<weight<<endl;
}
