#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		int s[n],a[n]={0},b[n]={0};
		stack<int> c,d;
		for(int i=0;i<n;i++)
		{
			cin >> s[i];
		}
		for(int i=0;i<n;i++) // tim phan tu lon cua mang s
		{
			while(!c.empty() && s[c.top()] < s[i])
			{
				a[c.top()] = i;
				c.pop(); 
			}
			c.push(i);
		}
		for(int i=0;i<n;i++) // tim phan tu nho cua mang s
		{
			while(!d.empty() && s[d.top()] > s[i])
			{
				b[d.top()] = i;
				d.pop();
			}
			d.push(i);
		}
		
		for(int i=0;i<n;i++)
		{
			if(a[i]==0 || b[a[i]]==0)
			{
				cout << "-1 "; 
			}
			else
			{
				cout << s[b[a[i]]] << " ";
			}
		}
		cout << endl;		
	}
}
