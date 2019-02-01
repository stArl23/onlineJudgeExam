#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int x,y;
	while(cin>>x>>y){
		int base=min(x,y)/2*2,num=0;
		if(base==x&&base==y){
			num=base*2;
		}else if(base+1==x&&base+1==y){
			num=base*2+1;
		}else if(base+2==x&&base==y){
			num=base*2+2;
		}else if(base+3==x&&base+1==y){
			num=base*2+3;
		}else{
			num=-1;
		}
		
		if(num==-1){
			cout<<"No Number"<<endl;
		}else{
			cout<<num<<endl;
		}
	}
	return 0;
}
