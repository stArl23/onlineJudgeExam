#include<iostream>
#include<string>
using namespace std;

struct Node{
	char value;
	Node *left;
	Node *right;	
}; 

static int index=0;


Node* preorder(string input,int length){
	Node *node=new Node;
	
	if(input.at(index)=='#'){
		index++;
		return NULL;
	}
	else if(input.at(index)!='#'&&length>index){
		char t=input.at(index++);
		//不知道为何""+t不能转为string 
		node->value=t;
		node->left=preorder(input,length);
		node->right=preorder(input,length);
	}else{
		node=NULL;
	}
	return node;
	
}

void inorder(Node *node){
	if(node!=NULL){
		inorder(node->left);
		cout<<node->value<<" ";
		inorder(node->right);
	}
}


int main(){
	string input;
	while(cin>>input){
		index=0;
		Node* start=preorder(input,input.length());
		inorder(start);
		cout<<endl;
	}
	return 0;
}
