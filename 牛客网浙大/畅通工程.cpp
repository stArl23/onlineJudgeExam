#include<iostream>
#include<set>
#include<vector>
using namespace std;

int parents[1001];
int findRoot(int i) {
	if(parents[i]!=-1)
		return findRoot(parents[i]);
	else
		return i;
}
int main() {
	int num,m;
	while(cin>>num>>m&&m>0) {
		for(int i=1; i<=num; i++) {
			parents[i]=-1; 
		}

		for(int i=0; i<m; i++) {
			int a1,a2;
			cin>>a1>>a2;
			//���a1��a2��parent��ͬ����ô�ϲ�
			int ra1= findRoot(a1),ra2=findRoot(a2);

			if(ra1!=ra2) {
				int from_root,to_root;
				if(a1>a2) {
					to_root=ra2;
					from_root=ra1;
				} else {
					to_root=ra1;
					from_root=ra2;
				}

				//�ϲ�����
				for(int j=1; j<=num; j++) {
					int root=findRoot(j);
					if(root==from_root) {
						parents[j]=to_root;
					}
				}
			}

		}

		//find unique set number
		int u_n=0;
		for(int i=1; i<=num; i++) {
			if(parents[i]==-1)u_n++;
		}

		cout<<u_n-1<<endl;
	}
	return 0;
}
