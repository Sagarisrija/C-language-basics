#include<stdio.h>
#include<string.h>
void main()
{
	char str[100],i,j;
	scanf("%[^\n]s",str);
	for(i=0;str[i]!=0;i++);
	{
	}
	for(j=0;str[j]!=0;j++)
	{
		str[i]=str[j];
		i++;
		j++;
	}
	printf("%s",str);
}
