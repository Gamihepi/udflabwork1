#include<stdio.h>
void number(int n)
{
	if(n%3==0 && n%5==0)
	{
		printf("%d is Divisible 3 and 5.",n);
	}
	else
	{
		printf("%d is not Divisible 3 and 5.",n);
	}
}
void main()
{
	number(6);
}
