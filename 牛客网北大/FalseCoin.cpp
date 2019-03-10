/* 1. 将结果分为三组，相等组，小于组，大于组。
    A = B， A，B都加入相等组。
    A < B,  A加入小于组，B加入大于组，同时，不等于A或B的其他数加入相等组。
    A > B,  A加入大于组，B加入小于组，同时，不等于A或B的其他数加入相等组。
   2. 如果一个数既出现在小于组又出现在大于组，那么把它加入相等组。
   3. 判断相等组中未出现的数字，如果超过一个，则返回结果0，如果恰好为1个则结果
      为该数字。
 */
#include<iostream>
#include<set>
using namespace std;

int main() {
	int num,k;
	while(cin>>num>>k) {
		set<int> more,less,equal;
		for(int i=1; i<=num; i++) {
			legal[i]=false;
		}

		for(int i=0; i<k; i++) {
			int p,t;
			set<int> left,right;
			cin>>p;
			for(int j=0; j<p; j++) {
				cin>>t;
				left.insert(t);
			}

			for(int j=0; j<p; j++) {
				cin>>t;
				right.insert(t);
			}

			string flag;
			cin>>flag;
			if(flag=="=") {
				equal.insert(left.begin(),left.end());
				equal.insert(right.begin(),right.end());
			} else if(flag=="<") {
				less.insert(left.begin(),left.end());
				more.insert(right.begin(),right.end());
				for(int i=1; i<=num; i++) {
					if(left.count(i)==0&&right.count(i)==0)
						equal.insert(i);
				}
			} else {
				less.insert(right.begin(),right.end());
				more.insert(left.begin(),left.end());
				for(int i=1; i<=num; i++) {
					if(left.count(i)==0&&right.count(i)==0)
						equal.insert(i);
				}
			}

			for(auto i:less) {
				if(more.find(i)!=more.end()) {
					equal.insert(i);
				}
			}
		}

		int count_illegal=0;
		int illegal=1;

		for(int i=1; i<=num; i++) {
			if(equal.count(i)==0) {
				illegal=i;
				count_illegal++;
			}
		}

		if(count_illegal==1) {
			cout<<illegal<<endl;
		} else {
			cout<<"0"<<endl;
		}

	}
	return 0;
}
