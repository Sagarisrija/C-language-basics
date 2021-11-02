#include<stdio.h>
int strong(int);
int main()
{
	int n,res;
	scanf("%d",&n);
	res=strong(n);
	printf("%d",res);
	if(n==res)
	{
		printf("Strong Number");
	}
	else
	{
		printf("Not strong");
	}
}
int strong(int n)
{
	int r,i,fact,sum=0;
	while(n!=0)
	{
	r=n%10;
	i=1;
	fact=1;
	while(i<=r)
	{
		fact=fact*i;
		i++;
	}
	sum=sum+fact;
	n=n/10;
}
    return sum;
}

