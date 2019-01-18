#include<iostream>
#define MAXSIZE 1000001
using namespace std;
long sum[MAXSIZE];
long array[MAXSIZE];
int main(){
	
	int num,t;
	while(cin>>num){
		
		for(int i=1;i<=num;i++){
			sum[i]=0;
		}
		
		
		for(int i=1;i<=num;i++){
			cin>>t;
			array[i]=t;
		}
		
		sum[1]=array[1];
		for(int i=1;i<=num;i++){
			sum[i]=max(sum[i-1]+array[i],array[i]);
		}
		
		long maxx=-1000000;
		for(int i=1;i<=num;i++){
			if(maxx<sum[i])
				maxx=sum[i];
		}
			
		cout<<maxx<<endl;
	}
	return 0;
}
