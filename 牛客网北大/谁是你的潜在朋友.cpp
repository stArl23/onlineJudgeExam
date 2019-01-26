#include<iostream>
#include<vector>
#include<cstring>
using namespace std;

int main(){
	int m,n,book;
	int reader_num[201];
	while(cin>>n>>m){
		vector<int> like_which_book;
		for(int i=0;i<201;i++)
			reader_num[i]=0;
		for(int i=0;i<n;i++){
			cin>>book;
			like_which_book.push_back(book);
			reader_num[book]++;
		}
		
		for(int i=0;i<n;i++){
			int book=like_which_book[i];
			if(reader_num[book]==1){
				cout<<"BeiJu"<<endl;
			}else{
				cout<<reader_num[book]-1<<endl;
			}
		}
	}
	return 0;
} 
