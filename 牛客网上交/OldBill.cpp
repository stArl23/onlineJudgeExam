#include<iostream>

using namespace std;

int main(){
	int n,x,y,z;
	while(cin>>n){
		cin>>x>>y>>z;
		int r1=0,r2=0,result=0;
		bool flag=true;
		for(int i=9;i>=1;i--){
			for(int j=9;j>=0;j--){
				int nums=i*10000+x*1000+y*100+z*10+j;
				if(nums%n==0){
					r1=i,r2=j,result=nums/n;
					flag=false;
					break;
				}
			} 
			
			if(!flag)break;
		} 
		
		if(r1==r2&&r2==result&&result==0){
			cout<<"0"<<endl;
		}else{
			cout<<r1<<" "<<r2<<" "<<result<<endl;
		}
		
	}
	return 0;
}
