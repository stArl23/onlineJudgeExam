#include<iostream>
using namespace std;

int main(){
	int size,num;
	while(cin>>size>>num){
		int pass_by=0;
		int array[10001]={0};
		while(num--){
			int low,high;
			cin>>low>>high;
			for(int i=low;i<=high;i++){
				if(array[i]==0){
					array[i]=1;
					pass_by++;
				}
			}
		}
		cout<<size-pass_by+1<<endl;
	}	
}
