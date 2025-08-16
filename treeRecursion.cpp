#include<iostream>
#include<cstdio>


void FunTree(int n)
{
	if(n>0)
	{
		printf("%d ", n);
		FunTree(n-1);
		FunTree(n-1);
	}

}


int main()
{

	FunTree(3);


	return 0;
}
