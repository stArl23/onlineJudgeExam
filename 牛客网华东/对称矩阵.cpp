#include<iostream>

using namespace std;

int main(){
	int n;
	int a[100][100];
	while(cin>>n){
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cin>>a[i][j];
			}
		}
		
		bool flag=true;
		for(int i=0;i<n-1;i++){
			for(int j=i+1;j<n;j++){
				if(a[i][j]!=a[j][i]){
					flag=false;
					break;
				}
			}
			if(!flag)break;
		}
		
		if(flag){
			cout<<"Yes!"<<endl;
		}else{
			cout<<"No!"<<endl;
		}
	}
	return 0;
}
