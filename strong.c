#include<stdio.h>
int main()
{
	int r,n,evencount=0,oddcount=0,totalcount=0;
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		if(r%2==0)
		{
			evencount++;
		}
		else
		{
			oddcount++;
		}
		totalcount++;
		n=n/10;
	}
	if(totalcount==evencount)
	{
		printf("Strong Even");
	}
	else if(totalcount==oddcount)
	{
		printf("Strong Odd");
	}
	else
	{
		printf("Mixed Number");
	}
}
