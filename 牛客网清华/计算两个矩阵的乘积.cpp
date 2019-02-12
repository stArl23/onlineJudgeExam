#include<iostream>

using namespace std;

int a[2][3],b[3][2],c[2][2];
int main(){
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			cin>>a[i][j];
		}
	}
	
	for(int i=0;i<3;i++){
		for(int j=0;j<2;j++){
			cin>>b[i][j];
		}
	}
	
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			int sum=0;
			for(int k=0;k<3;k++){
				sum+=a[i][k]*b[k][j];
			}
			c[i][j]=sum;
		}
	}
	
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			cout<<c[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
} 
