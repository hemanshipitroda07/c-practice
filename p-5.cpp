#include<stdio.h> 
#include<conio.h> 

int main() 
{ 
int    *p,i,j,n; 

printf("Enter any value:->"); 
scanf("%d",&n); 
p=&n; 
for(i=1;i<=*p;i++) 
{ 
for(j=*p;j>=i;j--) 
{ 
printf("%d",i); 
} 
printf("\n"); 
} 
getch(); 
}
