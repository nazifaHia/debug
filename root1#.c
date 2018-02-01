#include "root1.h"

double f (double x)
{
	return (1-x*x);
}

double f (double x)
{
	return (x);
}

double f (double x)
{
	return (g(x)-f(x));
}


