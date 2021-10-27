#include<stdio.h>
int main()
{
	int n,i,temp,sum=0;
	scanf("%d",&n);
	temp=n;
	 for(i=1;i<n;i++)
	 {
	 	
	 	if(n%i==0)
	 	{
	 		sum=sum+i;
		 }
		 
	 }
	 if(temp==sum)
	 {
	 printf("Strong number");
}
else
{
	printf("Not strong number");
}
}
