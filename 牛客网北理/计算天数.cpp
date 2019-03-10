#include<iostream>
using namespace std;

bool is_run(int year){
	return (year%4==0&&year%100!=0)||(year%400==0);
}
int monthes[]={31,28,31,30,31,30,31,31,30,31,30,31};
int main(){
	int n,year,month,day;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>year>>month>>day;
		int days=0;
		for(int j=0;j<(month-1);j++){
			if(j==1&&is_run(year)){
				days++;
			}
			days+=monthes[j];
		}
		days+=day;
		cout<<days<<endl;
	}
	return 0;
}



