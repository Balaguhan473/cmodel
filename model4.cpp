#include<stdio.h>
 
int main()
{
    int i, j, rows;
	     
    printf(" \nPlease Enter the Number of Rows : ");
    scanf("%d", &rows);
         
    for(i = rows; i >= 1; i--)
    {
    	for(j = i; j <= rows; j++)
		{
			printf("%d", j);     	
        }
        printf("\n");
    }
    return 0;
}
