#include<iostream>
using namespace std;

int main(){
	int n,temp;
	while(cin>>n){
		int temp=0,sum=0;
		for(int i=0;i<n;i++){
			cin>>temp;
			sum+=temp;
		}
		double res=(double)sum/n;
		printf("%.2lf\n",res);
	}
	return 0;
}
