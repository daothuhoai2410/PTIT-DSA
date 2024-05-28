#include <bits/stdc++.h>
using namespace std;

string s;
int x[15];
bool used[15];

void in()
{
	for(int i=1;i<=s.size();i++)
	{
		cout << s[x[i]-1];
	}
	cout << " ";
}

void Try(int i)
{
	for(int j=1;j<=s.size();j++)
	{
		if(!used[j])
		{
			used[j] = true;
			x[i]=j;
			if(i==s.size())	in();
			else	Try(i+1);
			used[j] = false;
		}
	}
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		cin >> s;
		for(int i=1;i<s.size();i++)
		{
			used[i] = false;
		}
		Try(1);
		cout << endl;
	}
}
