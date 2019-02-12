#include<iostream>
#include<vector>
using namespace std;

int main() {
	int n;
	while(cin>>n&&n>0) {
		vector<int> res;
		for(int i=0; i<n; i++) {
			int temp;
			cin>>temp;
			res.push_back(temp);
		}

		int start=0,end=0,max1=-100000;
		bool is_nagetive=false;
		for(int i=0; i<res.size(); i++) {
			if(res[i]>=0)is_nagetive=true;
		}

		if(is_nagetive) {
			for(int i=0; i<res.size(); i++) {
				int sum=res[i];
				if(max1<sum) {
					max1=sum;
					start=i;
					end=i;
				}
				for(int j=i+1; j<res.size(); j++) {
					sum+=res[j];
					if(sum>max1) {
						max1=sum;
						start=i;
						end=j;
					}
					
				}
			}
		}else{
			max1=0;
			start=0;
			end=res.size()-1;
		}

		cout<<max1<<" "<<res[start]<<" "<<res[end]<<endl;

	}
	return 0;
}
