#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		int a[15];
		vector<string> v;
		string r="";
		for(int i=1;i<=n;i++)
		{
			cin >> a[i];
			r+= to_string(a[i]);
			if(i!=n) r+= " ";
		}
		v.push_back(r);
		for(int i=1;i<n;i++)
		{
			string s = "";
			for(int j=1;j<=n-i;j++)
			{
				a[j] = a[j] + a[j+1];
				s += to_string(a[j]);
				if(j!=n-i) s+= " ";
			}
			v.push_back(s);
		}
		for(int i=v.size()-1;i>=0;i--)
		{
			cout << "[" << v[i] << "]" << " ";
		}
		cout << endl;
	}
}
