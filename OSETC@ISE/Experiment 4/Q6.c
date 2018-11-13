#include <stdio.h>
#include <string.h>

char mx[100],mn[100],s[100];

int main()
{
	scanf("%s",s);
	printf("Enter word: ");
	strcpy(mx,s);strcpy(mn,s);
	while (1)
	{
		if (!~scanf("%s",s)) break;
		printf("Enter word: ");
		if (strcmp(mx,s)<0) strcpy(mx,s);
		if (strcmp(mn,s)>0) strcpy(mn,s);
	}
	printf("\nSmallest word: %s\n",mn);
	printf("Largest word: %s\n",mx);
	return 0;
}