#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	int len,count=1,i;
	scanf("%[^*]s",&s);
	while(s[i]!='\0')
	{
		if(s[i]==' ')
		{
			count++;
		}
		if(s[i]=='\n')
		{
			count++;
		}
		if (s[i]=='\t')
		{
			count++;
		}
		i++;
	}
	printf("%d",count);
	}
