#include<iostream>

using namespace std;

int arr[4][5];
int main() {

	while(cin>>arr[0][0]>>arr[0][1]>>arr[0][2]>>arr[0][3]>>arr[0][4]) {
		for(int i=1; i<4; i++) {
			for(int j=0; j<5; j++) {
				cin>>arr[i][j];
			}
		}

		int res[2][5];

		for(int i=0; i<5; i++) {
			int max1=-99999,max2=-99999,i1=0,i2=0;
			for(int j=0; j<4; j++) {
				if(max1<arr[j][i]) {
					max1=arr[j][i];
					i1=j;
				}
			}

			for(int j=0; j<4; j++) {
				if(max2<arr[j][i]&&j!=i1) {
					max2=arr[j][i];
					i2=j;
				}
			}

			if(i1>i2) {
				res[0][i]=arr[i2][i];
				res[1][i]=arr[i1][i];
			} else {
				res[0][i]=arr[i1][i];
				res[1][i]=arr[i2][i];
			}
		}

		for(int i=0; i<2; i++) {
			for(int j=0; j<5; j++) {
				cout<<res[i][j]<<" ";
			}
			cout<<endl;
		}
	}

	return 0;
}
