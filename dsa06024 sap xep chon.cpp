#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n; cin >> n;
	int a[n];
	for(int &i:a){	cin >> i;	}
	int cnt=1;
	for(int i=0;i<n-1;i++)
	{
		int min = i;
		for(int j=i+1;j<n;j++)
		{
			if(a[j] < a[min]) min =j;
		}
		swap(a[min],a[i]);
		cout << "Buoc " << cnt << ": ";
		cnt++;
		for(int e=0;e<n;e++){	cout << a[e] << " "; }
		cout << endl;
	}
	
}
