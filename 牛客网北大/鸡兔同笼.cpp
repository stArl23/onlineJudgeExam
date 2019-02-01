#include<iostream>

using namespace std;

int main(){
	int a;
	while(cin>>a){
		int min=0,max=0;
		if(a%2==0){
			int n1=a/4,n2=a/2;
			min=n1;
			if(a%4!=0){
				min++;
			}
			max=n2;
		}
		cout<<min<<" "<<max<<endl;
	}
	return 0;
}
