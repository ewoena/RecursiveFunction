#include<iostream>
#include<cstdio>


int car=0;

void BuyCar(int c);

void CanIBuy(int c)
{
	if(c>=100)
	{
		car=car+1;
		BuyCar(c-100);
	}
}

void BuyCar(int c)
{

	printf("The number of cars I can buy %d\n", car);
	CanIBuy(c);
}


int main()
{

	int cash=2401;

	CanIBuy(cash);

	return 0;
}
