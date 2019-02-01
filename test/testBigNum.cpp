#include<iostream>
#include<cmath>
using namespace std;

int getnum(int n){
	int result=1;
	for(int i=0;i<n;i++){
		result*=2;
		result=result%100000;
	}
	return result;
} 
int main(){
	
	cout<<(getnum(500)+getnum(499))%100000<<endl;
	return 0;
}
