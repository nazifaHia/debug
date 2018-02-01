#include<bits/stdc++.h>

using namespace std;

int main()
{
	long x,cnt=0;
	cin>>x;

	int remainder=x%10;
	int container =x;
	
	again:
	while(remainder!=0)
	{
		cnt+=remainder;
		container=container/10;
		remainder=container%10;
	}
	
	if((cnt/10)==0)
	{
		cout<<cnt%10<<endl;
	}
	else
	{
		remainder=(cnt%10);
		
		container=cnt;
		
		cnt=0;
		goto again;
	}
	

	return 0;
}


