#include<iostream>
#include<cstdio>


//Tail Recursive. This is when the function call is the last in the recursive
//function
//

void fun(int n)
{
	if(n>0)
	{
		printf("fun:%d\n", n);
		fun(n-1);
	}

}

void fun1(int n)
{
	while(n>0)
	{
		printf("fun1:%d\n",n);
		n--;
	}
}


int main()
{

	int x=4;

	fun(x);
	fun1(x);


	return 0;
}
