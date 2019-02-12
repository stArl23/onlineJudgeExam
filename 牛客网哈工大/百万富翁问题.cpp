#include<iostream>

using namespace std;

int main(){
	long sum=0;
	long start=1;
	for(int i=0;i<30;i++){
		sum+=start;
		start*=2;
	}
	
	cout<<10*30<<" "<<sum<<endl;
	return 0;
}
