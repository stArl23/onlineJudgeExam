#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class greater_class{
public:
    bool operator()(int a, int b)
    {
        return a > b;
    }
};

int pop(vector<int> &heap){
	int result=heap.front();
	pop_heap(heap.begin(),heap.end(),greater_class());
	heap.erase(heap.begin(),heap.begin()+1);
	return result;
}

void push(vector<int> &heap,int value){
	heap.push_back(value);
	push_heap(heap.begin(),heap.end(),greater_class());
}


int parents[1001];

//考虑采用链式结构替代 
//unpass 
int main(){
	for(int i=0;i<1001;i++)
		parents[i]=0;
		
	
	int num,temp;
	vector<int> heap(0);
	
	cin>>num;
	while(num--){
	//	cin.ignore('\n');
		cin>>temp;
		//cout<<temp<<endl;
		heap.push_back(temp);
	}
	//获得所有节点的集合 
	vector<int> temp1(heap.begin(),heap.end());
	make_heap(heap.begin(),heap.end(),greater_class());
	
	int parent=heap[0]; 
	while(heap.size()>1){
		int n1=pop(heap),n2=pop(heap);
		parent=n1+n2;
		//设置parent域 
		parents[n1]=parents[n2]=parent;
		//入堆 
		push(heap,parent); 
	}
	
	parents[parent]=-1;
	//cout<<parent<<endl;
	int result=0;
	for(int i=0;i<temp1.size();i++){
		int line=0,weight=temp1[i];
		//cout<<node<<endl;
		while(parents[weight]!=-1){
			line++;
			weight=parents[weight];
			
		}
		//cout<<line<<" "<<node<<endl; 
		result+=weight*line;
	}
	
	cout<<result<<endl; 
}
