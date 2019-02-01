#include<iostream>
#include<cstring>
using namespace std;

void insert(int arr[],int value){
	int root=1;
	while(arr[root]!=-1){
		if(value>arr[root]){
			root=root*2+1;	
		}
		else{
			root*=2;
		}
	}
	arr[root]=value;
}

bool insert(int arr[],int value,int target[]){
	int root=1;
	while(target[root]!=-1){
		if(value>target[root]){
			root=root*2+1;	
		}
		else{
			root*=2;
		}
	}
	target[root]=value;
	return target[root]==arr[root];
}
int main(){
	int num;
	while(cin>>num&&num!=0){
		int arr[600];
		string temp;
		memset(arr,-1,sizeof(arr));
		cin>>temp;
		for(int i=0;i<temp.size();i++){
			insert(arr,temp[i]-'0');
		}
		
//		for(int i=0;i<50;i++)
//			cout<<arr[i]<<" ";
//		cout<<endl;
		
		for(int i=0;i<num;i++){
			int target[600];
			memset(target,-1,sizeof(target));
			cin>>temp;
			bool flag=true;
			for(int j=0;j<temp.size();j++){
				if(!insert(arr,temp[j]-'0',target)){
					flag=false;
					break;
				}
			}
			
//			for(int i=0;i<50;i++)
//				cout<<target[i]<<" ";
//			cout<<endl;
			if(flag){
				cout<<"YES"<<endl; 
			}else{
				cout<<"NO"<<endl;
			}
		}
	} 
	return 0;
}
