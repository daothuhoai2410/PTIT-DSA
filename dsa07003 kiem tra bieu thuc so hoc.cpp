#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	cin.ignore();
	while(t--)
	{
		int ok=1;
		string s; getline(cin,s);
		stack<char> a;
		int n=s.size();
		for(int i=0;i<n;i++)
		{
			if(s[i]=='(' || s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/')
			{
				a.push(s[i]);
			}
			else if(s[i]==')')
			{
				if(a.top() == '(')
				{
					ok=0;
					break;
				}
				else
				{
					while(a.top() != '(')
					{
						a.pop();
					}
					a.pop();
				}
			}
		}
		if(ok==1)	cout << "No\n";
		else	cout << "Yes\n";
	}
}
