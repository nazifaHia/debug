#include<stdio.h>
#include<math.h>

#define pi 3.1415926535897932

int main()
{
	int x;
	double d=(pi/180);
	
	for(int i=-360;i<=360;i++)
	{
		printf("%d,%g,%g,%g\n",i,sin(d*i),cos(d*i),(cos(d*i)-sin(d*i)));
	}

	return 0;
}                                                                              
