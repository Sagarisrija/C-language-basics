#include<stdio.h>
void main()
{
	int s[100],i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&s[i]);
	}
	for(i=0;i<n;i++)
	{
		if(s[i]%2==0)
		{
		printf("%d",s[i]);
    	} 

}
}
