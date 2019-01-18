#include<iostream>
#include<string>
#include<cmath>

using namespace std;

int main(){
	int num,t;
	while(cin>>num){
		for(int i=0;i<num;i++){
			cin>>t;
			int n=0,r=sqrt(1.0*t);//去重 
			if(r*r==t){
				n++;
				r--;
			}
			for(int j=1;j<=r;j++){
				if(t%j==0)n+=2;//这里为什么加2，因为s=a*b,s%a==0,a,b都为因子
			}
			cout<<n<<endl;
		}
	}
	return 0;
}
