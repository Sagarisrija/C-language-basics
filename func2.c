#include<stdio.h>
int prime(int);
int main()
{
	int n,res;
	printf("Enter range");
	scanf("%d",&n);
	res=prime(n);
	if(res==1)
	printf("%d",res);
}
int prime(int n)
{
	int i,j,flag;
	for(i=1;i<n;i++)
	{
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				flag++;
				break;
			}
		}
		if(flag==0)
		{
			return 1;
		}
		} 
		return 0;
}
