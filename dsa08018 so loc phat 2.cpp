#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		queue<string> a;
		vector<string> v;
		a.push("6");
		a.push("8");
		while(1)
		{
			string tmp = a.front();
			a.pop();
			if(tmp.size() > n ) break;
			v.push_back(tmp);
			if(tmp.size() < 15)
			{
				a.push(tmp + "6");
				a.push(tmp + "8");
			}
		}
		cout << v.size()<< endl;
		for(int i=0;i<v.size();i++)
		{
			cout << v[i] << " ";
		}
		cout << endl;
	}
}
