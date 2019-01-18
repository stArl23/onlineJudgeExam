#include<iostream>
using namespace std;

int main(){
	long n,t;
	while(cin>>n){
		long max=-1000000, min=1000000;
		while(n--){
			cin>>t;
			if(t>max)max=t;
			if(t<min)min=t;
		}
		cout<<max<<" "<<min<<endl;
	}
	return 0;
}
