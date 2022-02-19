#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	char a[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
	string ans="";
	while(n>0)
	{
		ans=a[n%16]+ans;
		n=n/16;
	}
	cout<<ans;
}
