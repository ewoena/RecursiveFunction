#include<iostream>
#include<cstdio>

void fun1(int n);

void fun2(int n)
{
	if(n>1)
	{
		printf("%d ", n);
		fun1(n/2);
	}
}

void fun1(int n)
{
	if(n>0)
	{
		printf("%d ", n);
		fun2(n-1);
	}
}

int main()
{

	fun1(20);


	return 0;
}
