#include <bits/stdc++.h>
#include <algorithm>
#include <sstream> 
#include<cstring>
using namespace std;

int total_score[1000001];
int main(){
    string line;
    getline(cin,line);
    istringstream iss(line);
    int id,start,end,score;
    memset(total_score,0,sizeof(total_score));
    int start1=1000001,end1=-1;
	while(iss>>id>>start>>end>>score){
    	if(start1>start){
    		start1=start;
		}
		if(end1<end){
			end1=end;
		}
		
		for(int i=start;i<end;i++){
			total_score[i]+=score;
		}
	}
	
	int max1=-1;
	for(int i=start1;i<=end1;i++){
		if(max1<total_score[i]){
			max1=total_score[i];
		}
	}
	
	cout<<max1<<endl;
    return 0;
}
