#include<stdio.h>
#include<conio.h>

int main()
{
	int *p,i,j,n;
	
	printf("Enter any value:->");
	scanf("%d",&n);
	p=&n;
	for(i=1;i<=*p;i++)
{
for(j=1;j<=i;j++)
{
	printf("%d",j);
}
printf("\n");
}
getch();
}

