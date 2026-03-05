#include<stdio.h>
#include<conio.h>

int main()
{
	int a[5],even=0,odd=0;
	int *p,i;
	
	p=a;
	printf("Enter element in array:->");
	for(i=0;i<5;i++)
	{
		scanf("%d",p);
		if(*p%2==0)
		{
			even++;
		}
		else
		{
			odd++;
		}
	}
	printf("Total no of odd:=>%d", odd);
	printf("\n");
	printf("\n Total no of even:->%d",even);
	getch();
}
