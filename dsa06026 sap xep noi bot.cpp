#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n ; cin >> n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
	}
	int cnt=1;
	int  ok=1;
	while(ok){
		ok=0;
		for(int j=0;j<n;j++)
		{
			if(a[j]>a[j+1]) 
			{
				swap(a[j],a[j+1]);
				ok=1;
			}
		}
		if(ok){
			cout << "Buoc " << cnt << ": ";
		for(int e=0;e<n;e++)
		{
			cout << a[e] << " ";
		}
		cnt++;
		cout << endl;
		}
	}
}
