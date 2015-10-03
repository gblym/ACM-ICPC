/*************************************************************************
    > File Name: a.cpp
    > Author: gblym
    > Mail: mylbg4evol@gmail.com 
    > Created Time: Sat Oct  3 16:20:53 2015
 ************************************************************************/

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		int ans=1;
		for(int i=1;i<=n;++i)
		{
			int x;
			cin>>x;
			int y=sqrt(x);
			if(y*y<x)ans=0;
		}
		if(ans)cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
	return 0;
}

