#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool judge(string s) { //�жϴ��Ƿ�Ϊȫ�㴮
	for(int i=0; i<s.size(); i++)
		if(s[i]!='0') return 1;
	return 0;
}

string solve(string s,int n,int m) { //n����תm����ֻ��0-9���ƣ����漰����ĸ�Ľ��ƣ������޸ļ���
	string r,ans;
	int d=0;
	if(!judge(s)) return "0"; //����
	while(judge(s)) { //��������Ϊ0�����
		for(int i=0; i<s.size(); i++) {
			r+=(d*n+s[i]-'0')/m+'0';  //�����
			d=(d*n+(s[i]-'0'))%m;  //�������
		}
		s=r; //���̸�����һ�εı�����
		r=""; //�������
		ans+=d+'0';//���Ͻ���ת��������
		d=0;//�������
	}
	reverse(ans.begin(),ans.end());//������
	return ans;
}


int main() {
	string temp;
	while(cin>>temp) {
		cout<<solve(temp,10,2)<<endl;
	}
	return 0;
}
