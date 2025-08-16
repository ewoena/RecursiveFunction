#include<iostream>
#include<cstdio>

int sum(int n)
{
	if(n<=0)
		return 0;
	else
		return sum(n-1)+n;
}

int sumLoop(int n)
{
	int suml=0;
	for(int i=0;i<=n;i++)
		suml=suml+i;
	return suml;
}

int sumFormular(int n)
{
	return (n+1)*n/2;
}


int main()
{
	int x=10;

	int res;

	res=sumFormular(x);

	printf("%d\n", res);

	return 0;
}
