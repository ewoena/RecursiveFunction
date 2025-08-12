#include<iostream>
#include<cstdio>

void fun(int x)
{
	if(x>0)
	{
		fun(x-1);
		printf("%d\n",x);
	}
}


int main()
{

	int a;

	a=10;

	fun(a);


	return 0;
}
