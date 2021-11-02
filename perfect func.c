#include<stdio.h>
int perfect(int);
int main()
{
	int n,res;
	scanf("%d",&n);
	res=perfect(n);
	printf("%d",res);
	if(n==res)
	{
		printf("Perfect Number");
	}
	else
	{
		printf("Not Perfect");
	}
}
int perfect(int n)
{
	int r,sum,i;
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			sum=sum+i;
		}
	}
	return sum;
}
