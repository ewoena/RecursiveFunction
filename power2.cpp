#include<iostream>
#include<cstdio>

int Pow(int m, int n)
{
	if(n==0)
		return 1;
	if(n%2==0)
		return m*Pow(m,n/2);
	else 
		return m*m*Pow(m,(n-1)/2);
}

int main()
{

	printf("%d\n", Pow(2,5));

	return 0;
}
