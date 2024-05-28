#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	vector<string> a;
	while(getline(cin,s))
	{
		if(s[0] == 's')
		{
			if(a.size()==0)
			{
				cout << "empty\n";
			}
			else
			{
				for(auto x : a)
				{
					cout << x << " ";
				}
				cout << endl;
			}
		}
		else 
		{
			if(s[1] == 'u')
			{
				string k = "";
				for(int i=5;i<s.size();i++)
				{
					k+=s[i];
				}
				a.push_back(k); 
			}
			else
			{
				a.pop_back();
			}
		}
		
	}
}
