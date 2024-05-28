#include <bits/stdc++.h>
#include <stack>
using namespace std;

int main()
{
	int n; cin >> n;
	stack<string> a;
	cin.ignore();
	while(n--)
	{
		string s;
		getline(cin,s);
		if(s[1] == 'R')
		{
			if(a.empty())
			{
				cout << "NONE\n";
			}
			else
			{
				cout << a.top() << endl;
			}
		}
		else
		{
			if(s[1] == 'U')
			{
				string k;
				for(int i=5;i<s.size();i++)
				{
					k += s[i];
				}
				a.push(k); 
			}
			else
			{
				if(!a.empty())	a.pop();
			}
		}
	}
}
