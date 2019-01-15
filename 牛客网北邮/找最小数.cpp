#include<iostream>
#include<vector>
using namespace std;

class Pair{
public:
	int x;
	int y;
	
	Pair(int x,int y){
		this->x=x;
		this->y=y;
	}
	
	bool operator < (const Pair b) const{
		if(this->x<b.x)
			return true;
		else if(this->x>b.x)
			return false;
		else{
			if(this->y<b.y)
				return true;
			else
				return false;
		}
	}
	
};


int main(){
	int num,a,b;
	vector<Pair> pairs;
	cin>>num;
	while(num--){
		cin>>a>>b;
		Pair t(a,b);
		pairs.push_back(t);
	}
	
	Pair min=pairs[0];
	for(int i=1;i<pairs.size();i++){
			if(pairs[i] < min)
				min=pairs[i];
	}
	
	cout<<min.x<<" "<<min.y<<endl;
	return 0;
}
