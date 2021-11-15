#include<stdio.h>
void main()
{
	int s[10],i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&s[i]);
	}
	for(i=n-1;i>=0;i--)
	{
		printf("%d\n",s[i]);
	}
}
