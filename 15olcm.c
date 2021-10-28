#include<stdio.h>
int main()
{
	int a,b,t,res=1;
	scanf("%d%d",&a,&b);
	while(1)
	{
		if(a%t==0 && b%t==0)
		{
			a=a/t;
			b=b/t;
			res=res*t;
		}
		else
		{
			t++;
		}
		if(t>a || t>b)
		{
			res=res*a*b;
			break;
		}
	}
		printf("%d",res);
	}
	
