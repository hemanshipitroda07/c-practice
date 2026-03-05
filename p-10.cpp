#include<stdio.h>
#include<conio.h>

int main()
{
	int a[6],max,min;
	int *p;
	
	printf("\n Enter element:->");
	scanf("%d",&a[0]);
	p=a;
	min=a[0];
	max=a[0];
	for(int i=0;i<=5;i++,p++)
	{
		printf("Enter Element no:->");
	scanf("%d",&a[i]);
	
	if(*p<min)
	{
		min=*p;
	}
	if(*p>max)
	{
		max=*p;
	}
}
printf("Maximum Number id:->%d",max);
printf("\n");
printf("Minimum Number is:->%d",min);
getch();
}
