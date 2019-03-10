#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int m,n,h;
	cin>>m;
	for(int i=0;i<m;i++){
		cin>>h>>n;
		double sum=0,h1=h;
		sum+=h1;
		n--;
		while(n--){
			h1/=2;
			sum+=h1*2;
		}
		
		printf("%.2lf\n",sum);
	}
	return 0;
}
