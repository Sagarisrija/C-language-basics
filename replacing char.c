#include<stdio.h>
#include<string.h>
void main()
{
	char s[100],ch,rpc;
	int len=0,i;
	gets(s);
	fflush(stdin);
	printf("Enter the character to be replaced: ");
	scanf("%c",&ch);
	fflush(stdin);
	printf("Enter the character: ");
	scanf("%c",&rpc);
	fflush(stdin);
	len=strlen(s);
	for(i=0;i<len;i++)
    {
	if (ch==s[i])
	{
		s[i]=rpc;
	}
	}
	printf("%s",s);
}
