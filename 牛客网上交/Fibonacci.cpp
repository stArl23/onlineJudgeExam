#include<iostream>
#include<cstring>
using namespace std;

int f[31];
int main(){
	int num=0;
	memset(f,0,sizeof(f));
	f[1]=1;
	for(int i=2;i<=31;i++){
		f[i]=f[i-1]+f[i-2];
	}
	
	while(cin>>num){
		cout<<f[num]<<endl;
	}
	return 0;
}
