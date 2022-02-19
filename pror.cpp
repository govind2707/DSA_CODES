#include<bits/stdc++.h>
#include<string>
#include<iostream>
using namespace std;
void fib(int n,int a,int b)
{
	if (n==0)
	return ;
	cout<<a<<" ";
	fib(n-1,b,a+b);
}
void ncr(int n,int r)
{
	int nu=1,d=1;
	r=(r>n-r)?n-r:r;
	int temp=r;
	while(temp>0)
	{
		nu=nu*(n--);
		temp--;
	}
	for(int i=r;i>=1;i--)
	d*=i;
	cout<<(nu/d);
}
int main()
{
	int n,r;
	cin>>n>>r;
	/*
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=(n-i+1);j++)
		cout<<j;
		cout<<endl;
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			if((i+j)%2==0)
			cout<<1;
			else
			cout<<0;
		}
		cout<<endl;
	}
	for(int i=1;i<=n;i++)
	{
		for(int k=i;k<=n;k++)
			cout<<" ";
		for(int j=1;j<=n;j++)
			cout<<"* ";	
		cout<<"\n";
		
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=i;j<n;j++)
		cout<<" ";
		for(int j=1;j<=i;j++)
		cout<<j<<" ";
		cout<<"\n";
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=i;j<n;j++)
		cout<<"  ";
		for(int k=i;k>=1;k--)
		cout<<k<<" ";
		for(int k=2;k<=i;k++)
		cout<<k<<" ";
		cout<<"\n";
	}
	5
        1
      2 1 2
    3 2 1 2 3
  4 3 2 1 2 3 4
5 4 3 2 1 2 3 4 5
	for(int i=1;i<=n;i++)
	{
		for(int k=i;k<n;k++)
		cout<<"  ";
		for(int k=1;k<=(2*i-1);k++)
		cout<<"* ";
		cout<<"\n";
	}
	for(int i=n;i>=1;i--)
	{
		for(int k=i;k<n;k++)
		cout<<"  ";
		for(int k=1;k<=(2*i-1);k++)
		cout<<"* ";
		cout<<"\n";
		
	}
	4
      *
    * * *
  * * * * *
* * * * * * *
* * * * * * *
  * * * * *
    * * *
      *
      &&&&&&&&&&&
	  
	int rem=0;
	string ans="";
	while(n>0)
	{
		rem=n%2;
		n=n/2;
		ans=((rem==0)?"0":"1")+ans;
	}
	cout<<ans;
	  
	  int ans=0;
	  int help=1;
	  while(n>0)
	  {
	  	ans+=(help)*(n%10);
	  	help=help<<1;
	  	n=n/10;
	}
	cout<<ans;
	*/
	ncr(n,r);
	  

}
