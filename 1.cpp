#include <bits/stdc++.h>
using namespace std;

#define ll long long



int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
{
	int n;
	cin>>n;
	string s;
	cin>>s;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	

	int sum=0;
	int l=INT_MIN;
	for(int i=0;i<n;i++)
	{
		if(s[i]=='1')
			sum+=max(arr[i],l);
		if(s[i]=='0' or arr[i]<l)
			l=arr[i];

	}
	cout<<sum<<endl;
	}



	return 0;
}

