#include<stdio.h>
int main()
{
	int n,i,r,temp,fact=1,sum=0;
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	 {
	 	r=n%10;
	 	i=1;
	 	fact=1;
	 	while(i<=r)
	 	{
	 		fact=fact*i;
	 		i++;
		 }
		 sum=sum+fact;
		 n=n/10;
	
	}
	if(sum==temp)
	{
		printf("Strong number");
	}
	else
	{
		printf("Not strong");
	}
}
	 
