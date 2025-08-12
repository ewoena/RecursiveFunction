#include<iostream>
#include<cstdio>

void fun(int a)
{
	if(a>0)
	{
		printf("Number:%d\n", a);
		fun(a-1);
	}
}

int main()
{
	int r=10;

	fun(r);



	return 0;
}
