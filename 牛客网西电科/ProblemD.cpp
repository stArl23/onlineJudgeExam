#include<iostream>
#include<string>
using namespace std;
string prev1,mid1,post1;
void post(int root,int start,int end){
	if(start>end)
		return;
	int i=start;
	while(i<end&&prev1[root]!=mid1[i])i++;
	//×ó×ÓÊ÷ 
	post(root+1,start,i-1);
	//ÓÒ×ÓÊ÷ 
	post(root+1+i-start,i+1,end);
	cout<<mid1[i];
}

void prev(int root,int start,int end){
	if(start>end)
		return;
	int i=end;
	while(i>start&&post1[root]!=mid1[i])i--;
	cout<<mid1[i];
	prev(root-1-end+i,start,i-1);
	prev(root-1,i+1,end);
}

int main(){
	
	while(cin>>mid1>>post1){
		cout<<prev1<<endl;
		prev(post1.size()-1,0,post1.size()-1);
		cout<<endl;
	}
	return 0;
}
