#include <stdio.h>
#include <string.h>
#define MAXN 1000010

char s[MAXN],sta[MAXN];
int n,i,top,f;

int main()
{
	printf("Enter parenteses and/or braces: ");
	scanf("%s",s);n=strlen(s);
	for (i=0;i<n;i++)
	{
		if (s[i]=='('||s[i]=='{') sta[++top]=s[i];
		else
		{
			if (top)
			{
				if (s[i]=='}'&&sta[top]=='{') --top;
				if (s[i]==')'&&sta[top]=='(') --top;
			}
			else
			{
				puts("Stack overflow");f=1;
				break;
			}
		}
	}
	if (top||f) puts("Parenteses/braces are not nested properly");
	else puts("Parenteses/braces are nested properly");
	return 0;
}