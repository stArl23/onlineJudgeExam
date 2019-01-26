#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class AscentSequence {
public:
    int findLongest(vector<int> A, int n) {
        // write code here
        int *a=new int[n];
        for(int i=0;i<n;i++)
        	a[i]=1;
        	
        for(int i=0;i<n;i++){
        	int tmax=1;
    		for(int j=0;j<i;j++){
    			if(A[i]>=A[j]){
    				tmax=max(tmax,a[j]+1);
				}
			}
			a[i]=tmax;
		}
		
		int t=a[n-1];
		for(int i=0;i<n;i++){
			if(a[i]>t)
				t=a[i];
		}
		
		return t;
    }
};

int main(){
	AscentSequence *a=new AscentSequence;
	int a1[]={157,232,6};
	vector<int> a2(a1,a1+3); 
	cout<<a->findLongest(a2,3)<<endl; 
	return 0;
} 
