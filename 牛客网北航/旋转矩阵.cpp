#include<iostream>

using namespace std;

int nums[10][10],nums1[10][10];
int main() {
	int n;
	while(cin>>n) {
		for(int i=0; i<n; i++) {
			for(int j=0; j<n; j++) {
				cin>>nums[i][j];
			}
		}


		for(int i=0; i<n; i++) {
			for(int j=0; j<n; j++) {
				cin>>nums1[i][j];
			}
		}

		bool flag=true;
		for(int i=0; i<n; i++) {
			for(int j=0; j<n; j++) {
				if(nums[i][j]!=nums1[i][j]) {
					flag=false;
					break;
				}
			}
			if(!flag)break;
		}

		if(flag) {
			cout<<"0"<<endl;
			continue;
		}

		flag=true;
		for(int i=0; i<n; i++) {
			for(int j=0; j<n; j++) {
				if(nums[i][j]!=nums1[j][n-1-i]) {
					flag=false;
					break;
				}
			}
			if(!flag)break;
		}

		if(flag) {
			cout<<"90"<<endl;
			continue;
		}

		flag=true;
		for(int i=0; i<n; i++) {
			for(int j=0; j<n; j++) {
				if(nums[i][j]!=nums1[n-1-i][n-1-j]) {
					flag=false;
					break;
				}
			}
			if(!flag)break;
		}

		if(flag) {
			cout<<"180"<<endl;
			continue;
		}

		flag=true;
		for(int i=0; i<n; i++) {
			for(int j=0; j<n; j++) {
				if(nums[i][j]!=nums1[n-1-j][i]) {
					flag=false;
					break;
				}
			}
		}

		if(flag) {
			cout<<"270"<<endl;
			continue;
		}

		cout<<"-1"<<endl;
	}
	return 0;
}
