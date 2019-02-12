#include<iostream>

using namespace std;

int nums[11];
int main(){
	int num;
	for(int i=0;i<=10;i++){
		nums[i]=0;
	}
		
		
	for(int i=0;i<20;i++){
		cin>>num;
		nums[num]++;
	}
//	
//	for(int i=1;i<=10;i++){
//		cout<<nums[i]<<" ";
//	}
//	cout<<endl;
	
	int max=-1,index=0;
	for(int i=1;i<=10;i++){
		if(max<nums[i]){
			max=nums[i];
			index=i;
		}		
	}
	
	cout<<index<<endl;
	return 0;
}
