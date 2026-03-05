#include<stdio.h> 
#include<conio.h> 

int main() 
{ 
int x,*ptr; 
 
printf("Enter any value:->"); 
scanf("%d",&x); 
ptr=&x; 
printf("\n Address of variable is:->%d",x); 
printf("\n Address of variable is:->%u",&x); 
printf("\n Address of variable is:->%d",*ptr); 
getch(); 
}
