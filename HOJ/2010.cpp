#include<iostream>
#include<cstring>
using namespace std;

int is_sxh[1001];
int main(){
	memset(is_sxh,0,sizeof(is_sxh));
	for(int i=100;i<=999;i++){
		string s=to_string(i);
		int num=0;
		for(int j=0;j<s.size();j++){
			int n=s[j]-'0';
			num+=n*n*n;
		}
		if(num==i){
			is_sxh[i]=1;
		}
	}
	int m,n;
	while(cin>>m>>n){
		int c=0;
		for(int i=m;i<=n;i++){
			if(is_sxh[i]==1){
				if(c==0){
					cout<<i;
				}else{
					cout<<" "<<i;
				}
				
				c++;
			}
		}
		
		if(c==0){
			cout<<"no"<<endl;
		}else{
			cout<<endl;
		}
	}
	return 0;
}
