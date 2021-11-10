#include<stdio.h>
void main()
{
	int s[10],i,sum=0,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&s[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+s[i];
	}
    printf("%d",sum);
    }


    
