#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		string s; cin >> s;
		stack<int> a;
		int pos = 0;
		for(int i=0;i<s.size();i++)
		{
			if(s[i] == 'D')
			{
				if(i==0 || s[i-1] == 'I')
				{
					pos++;
					a.push(pos);
				}
				pos++;
				a.push(pos);
			}
			else
			{
				while(!a.empty())
				{
					cout << a.top();
					a.pop();
				}
				if(i==0)
				{
					pos++;
					cout << pos;
				}
				if(s[i+1] != 'D')
				{
					pos++;
					cout << pos;
				}
			}
		}
		while(!a.empty())
		{
			cout << a.top();
			a.pop();
		}
		cout << endl;
	}
}
