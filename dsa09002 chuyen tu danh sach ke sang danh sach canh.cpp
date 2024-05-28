#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n; cin >> n;
	set<pair<int,int>> a;
	cin.ignore();
	for(int i=1;i<=n;i++) 
	{
		string s,token;
		getline(cin,s);
		stringstream ss(s);
		while(ss >> token)
		{
			int k=0;
			for(int j=0;j<token.size();j++)
			{
				k = k*10 + token[j] -'0';
			}
			int b = i, c = k;
			if(b>c){	swap(b,c);	}
			a.insert(make_pair(b,c));
		}
	}
	for(auto i : a)
	{
		cout << i.first << " " << i.second << endl;
	}
}
