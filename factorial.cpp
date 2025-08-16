#include<iostream>
#include<cstdio>

int fact(int n)
{
	if(n<1)
		return 1;
	else
		return fact(n-1)*n;
}

int main()
{
	int t=5;
	
	printf("The factorial of the number is %d\n", fact(t));

	return 0;
}
