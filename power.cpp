#include<iostream>
#include<cstdio>

int Pow(int n, int r)
{
	if(n==0)
		return 1;
	return Pow(n-1,r)*r;
}

int PowIter(int n, int r)
{
	int p=1;
	if (n==0)
		return 1;
	for(int i=1;i<=n;i++)
		p=p*r;
	return p;
}

int main()
{

	int n=6;
	int r=2;

	printf("Solution %d\n",Pow(n,r));
	printf("Solution %d\n",PowIter(n,r));


	return 0;
}
