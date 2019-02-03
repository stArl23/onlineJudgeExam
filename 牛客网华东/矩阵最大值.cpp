#include<iostream>

using namespace std;

int main() {
	int n,m;
	int arr[100][100];
	while(cin>>m>>n) {
		for(int i=0; i<m; i++) {
			for(int j=0; j<n; j++) {
				cin>>arr[i][j];
			}
		}

		for(int i=0; i<m; i++) {
			int sum=0,index=0,max1=-99999;
			for(int j=0; j<n; j++) {
				sum+=arr[i][j];
				if(arr[i][j]>max1) {
					max1=arr[i][j];
					index=j;
				}
			}
			arr[i][index]=sum;
		}

		for(int i=0; i<m; i++) {
			for(int j=0; j<n; j++) {
				cout<<arr[i][j]<<" ";
			}
			cout<<endl;
		}
	}
	return 0;
}
