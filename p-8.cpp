#include<stdio.h>
#include<conio.h>

int main()

{

	int a[2][2],i,j,n;
	
	printf("Enter your value in array:->\n");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
{
	printf("Element at [%d][%d] is %d \n",i,j,*(*(a+i)+j));
}
}
getch();
}

//#include<stdio.h>
//
//int main()
//
//    int a[2][2], i, j;
//
//    printf("Enter your value in array:->\n");
//
//    // Input
//    for(i = 0; i < 2; i++)
//    {
//        for(j = 0; j < 2; j++)
//        {
//            scanf("%d", &a[i][j]);
//        }
//    }
//
//    printf("\nArray elements are:\n");
//
//    // Output
//    for(i = 0; i < 2; i++)
//    {
//        for(j = 0; j < 2; j++)
//        {
//            printf("%d ", a[i][j]);
//        }
//        printf("\n");   // move to next row
//    }
//
//    return 0;
//}
