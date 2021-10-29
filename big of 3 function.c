#include<stdio.h>
int big(int,int,int);
int main()
{
	int a,b,c,d;
	scanf("%d%d%d",&a,&b,&c);
	d=big(a,b,c);
	printf("Biggest=%d",d);
}
int big(int a,int b,int c)
{
	if(a>b && a>c)
	{
		return a;
	}
	if(b>c && b>a)
	{
		return b;
	}
	else
	{
		return c;
	}
}
