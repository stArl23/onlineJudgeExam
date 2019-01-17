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



//考虑采用链式结构替代
//unpass
int main() {
	int num,temp;
	priority_queue<Node*,vector<Node*>,greater_class> heap;
	vector<Node*> temp1;
	cin>>num;
	while(num--) {
		//cin.ignore('\n');
		cin>>temp;
		//cout<<temp<<endl;
		Node* node=create(temp,NULL);
		heap.push(node);
		temp1.push_back(node);
	}
	//获得所有节点的集合

	//make_heap(heap.begin(),heap.end(),greater_class());


	int parent=-1;
	while(heap.size()>1) {
		Node* n1= heap.top();
		heap.pop();
		Node* n2= heap.top();
		heap.pop();
		parent=n1->value+n2->value;
		//设置parent域
		Node* parentNode=create(parent,NULL);
		n1->parent=parentNode;
		n2->parent=parentNode;
		//cout<<n1->value<<" "<<n2->value<<" parent "<<parentNode->value<<endl;
		//入堆
		//push(heap,parentNode);
		heap.push(parentNode);
	}


	//cout<<parent<<endl;
	int result=0;
	for(int i=0; i<temp1.size(); i++) {
		int line=0;
		Node* node1=temp1[i];
		Node* node=temp1[i];
		//cout<<node<<endl;
		while(node->parent!=NULL) {
			line++;
			node=node->parent;

		}
		//cout<<line<<" "<<node1->value<<endl;
		result+=node1->value*line;
	}

	cout<<result<<endl;
}
