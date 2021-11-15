#include<stdio.h>
void main()
{
	int a[100],i,n,small,pos;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	small=a[0];
	for(i=1;i<n;i++)
	{
		if(small>a[i])
		{
			small=a[i];
			pos=i;
		}
	}
	printf("%d\n",small);
	printf("%d",pos);
}
