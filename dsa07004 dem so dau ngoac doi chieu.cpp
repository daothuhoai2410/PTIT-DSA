#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		string s; cin >> s;
		stack<char> a;
		int n=s.size();
		
		for(int i=0;i<n;i++)
		{
			if(!a.empty() && a.top()=='(' && s[i]==')')
			{
				a.pop();
			}
			else
			{
				a.push(s[i]);
			}
		}
		int m=a.size();
		int k=0;
		while(!a.empty())
		{
			if(a.top()==')')
			{
				k++;
			}
			a.pop();
		}
		cout << m/2+k%2 << endl;
	}
}
