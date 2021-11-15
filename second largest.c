#include<stdio.h>
void main()
{
	int s[100],i,n,b1,b2,p,p1;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&s[i]);
	}
	b1=s[0];
	b2=s[0];
	for(i=1;i<n;i++)
	{
		if(b1<s[i])
		{
			b2=b1;
			b1=s[i];
			p=i;
			
		}
		else if (b2<s[i])
		{	
		b2=s[i];
		p1=i;
		}
		else
		{
		
		}
	}
	printf("%d",b2);
	printf("%d",p1);
}
