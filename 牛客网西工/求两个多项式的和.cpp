#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;


int posstives[101];
int negatives[101];

int main() {
	int n1,n2,cisu,xisu;
	while(cin>>n1) {
		memset(posstives,0,sizeof(posstives));
		memset(negatives,0,sizeof(negatives));
		int max_cisu=-101,min_cisu=101;
		for(int i=0; i<n1; i++) {
			cin>>xisu>>cisu;
			if(cisu>=0) {
				posstives[cisu]+=xisu;
			} else {
				negatives[-cisu]+=xisu;
			}

			max_cisu=max(max_cisu,cisu);
			min_cisu=min(min_cisu,cisu);
		}

		cin>>n2;
		for(int i=0; i<n2; i++) {
			cin>>xisu>>cisu;
			if(cisu>=0) {
				posstives[cisu]+=xisu;
			} else {
				negatives[-cisu]+=xisu;
			}

			max_cisu=max(max_cisu,cisu);
			min_cisu=min(min_cisu,cisu);
		}

		if(min_cisu>=0) {
			for(int i=max_cisu; i>=min_cisu; i--) {
				if(posstives[i]!=0) {
					cout<<posstives[i]<<" "<<i<<" ";
				}
			}
		} else {
			for(int i=max_cisu; i>=0; i--) {
				if(posstives[i]!=0) {
					cout<<posstives[i]<<" "<<i<<" ";
				}
			}

			for(int i=0; i<=-min_cisu; i++) {
				if(negatives[i]!=0) {
					cout<<negatives[i]<<" "<<-i<<" ";
				}
			}
			cout<<endl;
		}

	}
	return 0;
}
