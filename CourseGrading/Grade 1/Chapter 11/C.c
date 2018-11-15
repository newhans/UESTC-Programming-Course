#include <stdio.h>

int *find_largest(int a[],int n,int *mx)
{
	int i,t;*mx=1<<31;
	for (i=0;i<n;i++) if (*mx<a[i]){*mx=a[i];t=i;}
	return &a[t];
}

int main()
{
	int a[10],mx,i;int *p;
	printf("Enter 10 integers:\n");
	for (i=0;i<10;i++) scanf("%d",&a[i]);
	p=find_largest(a,10,&mx);
	printf("The largest: %d\n",*p);
	return 0;
}
