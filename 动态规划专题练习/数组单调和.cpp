#include<iostream>
#include<vector>

using namespace std;
class MonoSum {
	public:
		int calcMonoSum(vector<int> A, int n) {
			// write code here
			
        for(int i=0;i<A.size();i++){
        	int temp=0;
        	for(int j=i-1;j>=0;j--){
        		if(A[i]>=A[j])temp+=A[j];
			}
			sum+=temp;
		}

//		with dp

};

