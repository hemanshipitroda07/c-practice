#include<stdio.h> 
#include<conio.h> 

int main() 
{ 
int    x,*ptr; 

printf("Enter any value:->"); 
scanf("%d",&x); 
ptr=&x; 
++(*ptr); 
printf("\n value after increment :->%d",*ptr); --(*ptr); 
printf("\n value after decrement:->%d",*ptr); 
getch();
}
