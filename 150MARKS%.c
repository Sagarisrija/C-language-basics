#include<stdio.h>
int main()
{
	int TM,EM,MM,SCM,SOM,Total;
	float Percentage;
	scanf("%d%d%d%d%d",&TM,&EM,&MM,&SCM,&SOM);
	
	Total=TM+EM+MM+SCM+SOM;
	Percentage =Total*100/500;
	printf("Percentage=%f\n",Percentage);
	if(Percentage>=90)
	{
		printf("A grade");
	}
	else if(Percentage>=80 && Percentage<=90)
	{
		printf("B grade");
	}
	else if(Percentage>=70 && Percentage<=80)
	{
		printf("C grade");
	}
	else if(Percentage>=60 && Percentage<=70)
	{
		printf("D grade");
	}
	else if(Percentage>=50 && Percentage<=60)
	{
		printf("E grade");
	}
	else if(Percentage>=40 && Percentage<=50)
	{
		printf("Pass");
	}
	else
	{
		printf("Fail");
	}
}
