#include<iostream>
#include<cstdio>

// 5+4+3+2+1
// (n-1)+(n-2)+(n-3)+...+n
// (n-1)+n

int sum(int n)
{
	if(n>0)
	{
		return sum(n-1)+n;
	}
	return 0;
}

int sum1(int n)
{
	static int sum=0; // Static variables are created in a special place in 
			  // the code section in the computer memory.
			  // Also if sum is declared in outside of the function
			  // it is a static variable.
	if(n>0)
	{
		sum=sum+n;
		sum1(n-1);
	}

	return sum;
}

int main()
{

	int y;
	int z;
	int x=10;

	y=sum(x);

	printf("Sum: %d\n", y);

	z=sum1(x);

	printf("Sum1: %d\n", z);


	return 0;
}
