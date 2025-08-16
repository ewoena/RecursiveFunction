#include<iostream>
#include<cstdio>

int fact(int n)
{
	if(n==0)
		return 1;
	else
		return fact(n-1)*n;
}

int main()
{
	int x=5;

	printf("%d\n", fact(x));


	return 0;
}
