#include<iostream>
#include<cstdio>

int fun(int n)
{
	if(n>100)
		return n-10;
	else
		return fun(fun(n+11));
}


int main()
{

	fun(95);

	return 0;
}
