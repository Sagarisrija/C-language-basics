#include<stdio.h>
int reverse(int);
int main()
{
	int n,res;
	scanf("%d",&n);
	res=reverse(n);
	printf("%d",res);
}
int reverse(int n)
{
	int sum,r;
	while(n!=0)
	{
	r=n%10;
	sum=sum*10+r;
	n=n/10;
    }
	return sum;
}

