#include<iostream>
#include<algorithm>
using namespace std;

int gcd(int a,int b){
	if(a%b!=0&&b!=0){
		return gcd(b,a%b);
	}else{
		return b;
	}
}
int main(){
	int a,b;
	while(cin>>a>>b){
		if(a<b){
			swap(a,b);
		}
		int c=gcd(a,b);
		int m=a*b/c;
		cout<<m<<endl;
	}
	return 0;
} 
