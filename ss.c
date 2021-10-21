#include<stdio.h>
int main()
{
	int i,j,n,fc=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fc=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				fc=fc+1;
			}
		}
		if(fc==2)
		{
			printf("%d\n",i);
		}
	

}
}
