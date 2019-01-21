#include<iostream>
using namespace std;

int days_in_month[12]={31,28,31,30,31,30,31,31,30,31,30,31};

bool is_run(int year){
	return (year%100!=0&&year%4==0)|(year%400==0);
}
int main(){
	int y,m,d;
	while(cin>>y>>m>>d){
		int result=0,flag=0;
		for(int i=0;i<m-1;i++){
			if(m>2&&is_run(y)&&flag==0){
				result++;
				flag=1;
			}
			result+=days_in_month[i];
		}
		cout<<result+d<<endl;
	}
	return 0;
}
