#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

class Palindrome {
public:
	Palindrome(){
	}
    int getLongestPalindrome(string A, int n) {
        // write code here
        if(n==0|n==1)return n;
        int *dp=new int[n];
        //init
        for(int i=0;i<n;i++){
        	dp[i]=1;
        	char prev=A.at(i);
        	for(int j=i+1;j<n;j++){
        		if(A.at(j)!=prev)break;
        		dp[i]++;
			}
		}
        	
        for(int i=1;i<n-1;i++){
        	int i1=i,j1=dp[i]+i-1;
        	while(i1>=0&&j1<n&&A.at(i1)==A.at(j1)){
        		i1--;
        		j1++;
			}
			
			if(j1==n||i1==-1){
				j1--;
				i1++;
			}
			
			if(A.at(i1)!=A.at(j1)&&i1>=0&&j1<=n-1){
				j1--;
				i1++;
			}
			
			
			int t=j1-i1+1;
			dp[i]=max(t,dp[i]); 
		}
		
		int result=1;
		for(int i=0;i<n;i++){
			if(result<dp[i])result=dp[i];
		}
        return result;
    }
};

int main(){
	Palindrome *p=new Palindrome;
	cout<<p->getLongestPalindrome("abc1234321ab",12)<<endl;
	cout<<p->getLongestPalindrome("aa1",3)<<endl;
	cout<<p->getLongestPalindrome("av",2)<<endl;
	return 0;
}
