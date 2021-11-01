#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		if(isprime(i))
		{
			printf("%d",i);
		}
	}
}
int isprime(int n)
{
	int i;
	for(i=2;i<n;i++)
	{
	if(n%i==0)
	{
		return 0;
	}
}
return 1;
}
