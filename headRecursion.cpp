#include<iostream>
#include<cstdio>

void fun(int n)
{
	if(n>0)
	{
		fun(n-1);
		printf("%d\n",n);
	}
}

void fun1(int n)
{
	n=1;
	while(n<=5)
	{
		printf("%d\n", n);
		n++;
	
	}
}

int main()
{

	int x=5;

	fun(x);
	fun(x);


	return 0;
}
