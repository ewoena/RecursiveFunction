#include<iostream>
#include<cstdio>

int fact(int n)
{
	if(n==0)
		return 1;
	return fact(n-1)*n;
}

int fact2(int n)
{
	int p=1;
	for(int i=0;i<=1;i++)
		p=p*i;
	return p;
}


int main()
{
	int x=5;
	int res;

	res=fact(x);

	printf("The factorial of the number %d", res);

	return 0;
}
