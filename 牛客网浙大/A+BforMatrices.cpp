#include<iostream>

using namespace std;

int A[10][10],B[10][10],C[10][10];
int main() {
	int m,n,temp;
	while(cin>>m) {
		if(m==0)break;
		cin>>n;
		for(int i=0; i<m; i++) {
			for(int j=0; j<n; j++) {
				cin>>A[i][j];
			}
		}

		for(int i=0; i<m; i++) {
			for(int j=0; j<n; j++) {
				cin>>B[i][j];
			}
		}
		
		for(int i=0; i<m; i++) {
			for(int j=0; j<n; j++) {
				C[i][j]=B[i][j]+A[i][j];
			}
		}
		
		int num=0;
		for(int i=0;i<m;i++){
			bool flag=false;
			for(int j=0;j<n;j++){
				if(C[i][j]!=0){
					flag=true;
					break;
				}
			}
			if(!flag)num++;
		}
		
		for(int i=0;i<n;i++){
			bool flag=false;
			for(int j=0;j<m;j++){
				if(C[j][i]!=0){
					flag=true;
					break;
				}
			}
			if(!flag)num++;
		}
		
		cout<<num<<endl;
	}
	return 0;
}
