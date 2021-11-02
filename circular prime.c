#include<stdio.h>
int main()
{
	int n,fc=0,rev=0;
	scanf("%d",&n);
	fc=factor_count(n);
	if(fc==2)
	{
		printf("Prime");
		rev=reverse(n);
		fc=factor_count(rev);
		if(fc==2)
		{
			printf("Circular Prime");
		}
		else
		{
			printf("Not circular prime");
		}
}
	else
	{
		printf("Not prime");
	}
}
int factor_count(int n)
{
	int i,fc=0;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			fc++;
		}
	}
	return fc;
}
int reverse(int n)
{
	int r,sum=0;
	while(n!=0)
	{
		r=n%10;
		sum=sum*10+r;
		n=n/10;
	}
	return sum;
}
