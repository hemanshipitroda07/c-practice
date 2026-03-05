//#include<stdio.h> 
//#include<conio.h> 
//
//int main() {
//
//	int a[5];
//	int n,i; 
//	int *p; 
//	
//
//	p=a; 
//	
//	printf("Enter Number of elements :->"); 
//	scanf("%d",&n); 
//	printf("Enter element of array :->"); 
//	
//	for(i=0;i<n;i++,p++){
//		
//		scanf("%d",p); 
//		p=p-n; 
//		printf("element inarray are:->"); 
//		
//	}
//	
// 	for(i=0;i<n;i++,p++) {  
//		printf("%d",*p); 
//	} 
//	
//	return 0;
//
//}

//int main() {

//    int a[5];
//    int n,i; 
//    int *p; 
//    
//    p = a; 
//    
//    printf("Enter Number of elements:->");
//    scanf("%d",&n); 
//    
//    	
//    	printf("Enter elements of array :->");
//        for(i=0;i<n;i++)
//        {
//        	scanf("%d",p);
//        	p++;
//		}
//    
//    
//    p=p-n;   // Reset pointer back to start
//    
//    printf("Element in array are:-> ");
//     for(i=0; i<n; i++, p++) 
//	{  
//        printf("%d ", *p); 
   // } 
//    getch();
//}
//  
 #include<stdio.h>
 #include<conio.h>
 
 int main()
 {
  int a[5],n,i;
  int *p;
  
p = a;

printf("Enter Number of elements:->");
scanf("%d",&n);

printf("Enter elements of array :->");

for(i=0;i<n;i++, p++)
{
    scanf("%d", p);
}

p = a;   // Reset pointer safely

printf("Elements in array are:-> ");

for(i=0; i<n; i++, p++)
{
    printf("%d ", *p);
}
getch();
}

