#include<iostream>

using namespace std;

int main(){
	int n;
	while(cin>>n){
		for(int i=0;i<=100;i++){
			for(int j=0;j<=100-i;j++){
				int x=i,y=j,z=100-x-y;
				//同时乘3 保存精度 
				if(5*x*3+3*y*3+z<=n*3){
					cout<<"x="<<x<<",y="<<y<<",z="<<z<<endl;
				}
			} 
		} 
	}
	return 0; 
}
