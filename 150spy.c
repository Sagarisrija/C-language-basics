#include<stdio.h>
int main()
{
	int a,b,t,res;
	scanf("%d%d",&a,&b);
	while(a!=1)
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
		printf("L.C.M of %d and %d is %d",a,b,res);
	}
}

