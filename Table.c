#include<stdio.h>
int main()
{
	int n,l,i;
	printf("Table");
	scanf("%d",&n);
	printf("range");
	scanf("%d",&l);
	for(i=1;i<=l;i++)
	{
		printf("%d*%d=%d\n",n,i,n*i);
	}
}
