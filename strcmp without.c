#include<stdio.h>
#include<string.h>
void main()
{
	char s[100],s1[100];
	int i,len1,len2,k=0;
	gets(s);
	gets(s1);
	len1=strlen(s);
	len2=strlen(s1);
	if(len1==len2)
	{
		for(i=0;i<len1;i++)
		{
		if(s[i]==s1[i]);
		{
		k++;
		}
	}
	if(k==len1)
	{
		printf("Equal");
	}
}
	else
	{
		printf("Not equal");
	}
}
