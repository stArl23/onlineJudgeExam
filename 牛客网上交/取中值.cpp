#include<iostream>
#include<vector>
using namespace std;

int main() {
	int n1,n2,a,b,c,d,temp;
	while(cin>>n1>>n2) {
		vector<int> res1,res2,res;
		for(int i=0; i<n1; i++) {
			cin>>temp;
			res1.push_back(temp);
		}

		for(int i=0; i<n2; i++) {
			cin>>temp;
			res2.push_back(temp);
		}


		cin>>a>>b>>c>>d;
		for(int i=a-1;i<(b-1);i++){
			res.push_back(res1[i]);
		}
		
		for(int i=c-1;i<(d-1);i++){
			res.push_back(res2[i]);
		}
		
		//sort(res.begin(),res.end());
		
		int l=res.size();
		if(l%2==0){
			cout<<res[l/2-1]<<endl;
		}else{
			cout<<res[l/2]<<endl;
		}
		
//		for(int i=0;i<l;i++)
//			cout<<res[i]<<" ";
//		cout<<endl;
	}
	return 0;
}
