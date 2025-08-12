#include<iostream>
#include<cstdio>

void fun(int a)
{
	static int sum=0;
	if(a>0)
	{
		fun(a-1);

		sum=sum+a;
	}
	printf("%d\n", sum);

}

void fun1(int a)
{
	if(a>0)
	{
		fun1(a-1);
		printf("%d\n",a);
	}
}
		


int main()
{
	int x=5;

	fun(x);
	//fun1(x);

	return 0;
}
