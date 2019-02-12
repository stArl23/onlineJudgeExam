#include<iostream>

using namespace std;

int nums[10][10];
int main() {
	int n;
	while(cin>>n) {
		for(int i=0; i<n; i++) {
			for(int j=0; j<n; j++) {
				cin>>nums[i][j];
			}
		}

		for(int i=0; i<n; i++) {
			int max1=nums[i][i];
			int index=i;
			for(int j=i; j<n; j++) {
				if(nums[j][i]>max1) {
					index=j;
					max1=nums[j][i];
				}
			}

			for(int j=0; j<n; j++) {
				int temp=nums[i][j];
				nums[i][j]=nums[index][j];
				nums[index][j]=temp;
			}


		}

		for(int i=0; i<n; i++) {
			for(int j=0; j<n; j++) {
				cout<<nums[i][j]<<" ";
			}
			cout<<endl;
		}
	}


	return 0;
}


