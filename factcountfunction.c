#include<stdio.h>
int factor(int);
int main()
{
	int num,d;
	scanf("%d",&num);
	d=factor(num);
	printf("Number of factors=%d",d);
}
int factor(int num)
{
	int i,factor=0;
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		{
			factor++;
		}
	}
	return factor;
}
