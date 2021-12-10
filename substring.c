#include<stdio.h>
#include<string.h>
void main()
{
	char s[100],substr[50];
	int j,i=0,len;
	gets(s);
	printf("Enter the length of the substring");
	scanf("%d",&len);
	j=strlen(s)-len;
	while(s[j]!='\0')
	{
			substr[i]=s[j];
			i++;
			j++;
	}
	substr[j]='\0';
	printf("%s",substr);
}
