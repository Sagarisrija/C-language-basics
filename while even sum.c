#include<stdio.h>
int main()
{
int i=1,num,sum;
scanf("%d",&num);
while(i<=num)
{
	if(i%2==0)
	{
		printf("%d\n",i);
	}
	i++;
	sum=sum+i;
}
printf("%d",sum);
}
