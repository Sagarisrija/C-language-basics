#include<stdio.h>
int main()
{
	int i,n,fact=1;
	scanf("%d",&n);
	while(i<=n)
	{
		fact=fact*i;
		i++;
	}
	printf("%d",fact);
}
