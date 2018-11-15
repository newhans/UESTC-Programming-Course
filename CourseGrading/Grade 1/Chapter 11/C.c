#include <stdio.h>

void find_largest(int a[],int n,int *mx)
{
	int i;*mx=1<<31;
	for (i=0;i<n;i++) if (*mx<a[i]) *mx=a[i];
	return ;
}

int main()
{
	int a[10],mx,i;
	printf("Enter 10 integers:\n");
	for (i=0;i<10;i++) scanf("%d",&a[i]);
	find_largest(a,10,&mx);
	printf("The largest: %d\n",mx);
	return 0;
}
