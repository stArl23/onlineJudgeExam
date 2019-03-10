#include <bits/stdc++.h>
#include<cstdio>
#include<cstring>
#include<vector>
#include<sstream>
#include<algorithm>

using namespace std;

int arr[51][51];
int main()
{
    // please write your code here
    string line;
    int n=0,m=0;
	while(getline(cin,line)){
		if(line=="")break;
		istringstream iss(line);
		int i=0,temp;
		while(iss>>temp){
			arr[m][i]=temp;
			i++;
		}
		if(n==0){
			n=i;
		}
		m++;
	}
	
	int res=-1;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			int kx=i,ky=j,res_t=0;
			if((kx+1<m)&&(ky+1<n)){
				if(res<(arr[kx][ky]+arr[kx+1][ky+1])){
					res=arr[kx][ky]+arr[kx+1][ky+1];
				}
			}
		}
	}
	
	cout<<res<<endl; 
    return 0;
}
