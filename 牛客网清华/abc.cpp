#include<iostream>
using namespace std;
int main(){
	
	for(int a=0;a<10;a++){
		for(int b=0;b<10;b++){
			for(int c=0;c<10;c++){
				int t1=a*100+b*10+c;
				int t2=b*100+c*10+c;
				if(t1+t2==532)
					cout<<a<<" "<<b<<" "<<c<<endl;
			}
		}
	}
	return 0;
}
