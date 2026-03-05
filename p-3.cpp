#include<stdio.h> 
#include<conio.h>
 
int main() 
{ 
struct 
{ 
char name[20]; 
int age; 
char add[20]; 
}rec; 
 
printf("\n enter name=>"); 
scanf("%s",&rec.name); 
printf("\n enter age=>"); 
scanf("%d",&rec.age); 
printf("\n enter address=>"); 
scanf("%s",&rec.add); 
printf("\n your name is %s",rec.name); 
printf("\n your age is %d",rec.age); 
printf("\n your address is %s",rec.add); 
getch(); 
}
