#include <stdio.h>
#include <math.h>
#include <stdlib.h>
//#include "root1.h"



int main() {
   double a=-1.0, b=-2.0,dx, x0,f0,h0,g0 ;
   int n=200,i=0;

	dx=(b-a)/n;
	
	//printf("\"X\", \"F\" G/n",x0,f0,g0,h0);
	
   for(i=0;i<=n;i++)
   {
   	x0=a+i*dx;
   	f0=(x0);
   	g0=(x0);
   	h0=(x0);
   
   	printf("%g %g %g %g/n",x0,f0,g0,h0);
   	
   }
   
  }
   
   
  
