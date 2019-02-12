#include<iostream>
#include<vector>
#include<cstring>
#include<algorithm>
using namespace std;

//hash1 要大数字要多 
int hash1[100000];
int main() {
	int n,temp;
	while(cin>>n&&n!=0) {
		vector<int> res;
		memset(hash1,0,sizeof(hash1));
		for(int i=0; i<n; i++) {
			cin>>temp;
			int t=temp;
			if(hash1[t]==0) {
				hash1[t]=1;
				res.push_back(t);
			} else {
				continue;
			}

			while(t!=1) {
				if(t%2==0) {
					t/=2;
				} else {
					t=3*t+1;
					t/=2;
				}

				if(t!=1) {
					if(hash1[t]==1) {
						hash1[t]=-1;
						for(int j=0; j<res.size(); j++) {
							if(res[j]==t) {
								res[j]=-1;
							}
						}
					} else if(hash1[t]==-1) {
						break;
					} else {
						hash1[t]=-1;
					}
				}
			}
		}

		reverse(res.begin(),res.end());

		for(int i=0; i<res.size(); i++) {
			if(res[i]!=-1) {
				cout<<res[i]<<" ";
			}
		}

		cout<<endl;

	}
	return 0;
}
