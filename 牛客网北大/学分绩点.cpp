#include<iostream>
#include<cstdio>
#include<vector>

using namespace std;

double gpa(int score){
	if(score>=90){
		return 4.0;
	}else if(score>=85){
		return 3.7;
	}else if(score>=82){
		return 3.3;
	}else if(score>=78){
		return 3.0;
	}else if(score>=75){
		return 2.7;
	}else if(score>=72){
		return 2.3;
	}else if(score>=68){
		return 2.0;
	} else if(score>=64){
		return 1.5;
	}else if(score>=60){
		return 1.0;
	}else{
		return 0;
	}
}

int main(){
	int num;
	vector<int> scores1,scores2;
	while(cin>>num){
		int temp=0;
		for(int i=0;i<num;i++){
			cin>>temp;
			scores1.push_back(temp);
		}
		
		for(int i=0;i<num;i++){
			cin>>temp;
			scores2.push_back(temp);
		}
		
		double sum1=0,sum2=0;
		
		for(int i=0;i<num;i++){
			sum1+=scores1[i]*gpa(scores2[i]);
			sum2+=scores1[i];
		}
		
		double GPA=sum1/sum2;
		printf("%.2f",GPA);
	}
	return 0;
}
