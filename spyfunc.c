#include<stdio.h>
int spy(int);
int main()
{
	int n,res;
	scanf("%d",&n);
	res=spy(n);
	printf("%d",res);
	if(n==res)
	{
		printf("Spy number");
	}
	else
	{
		printf("Not spy");
	}
}
int spy(int n)
{
	int sq,r,sum=0;
	sq=n*n;//81
	while(sq!=0)
	{
		r=sq%10;
		sum=sum+r;
		sq=sq/10;
	}
	return sum;
	
}
