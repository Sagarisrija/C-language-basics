#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	if(a%5==0 && a%7==0)
	{
		printf("Number is divisible by both 5 and 7");
	}
	else
	{
		printf("Number is not divisible");
	}
}
