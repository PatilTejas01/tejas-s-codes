#include <stdio.h>
int main ()
{
	int matrix[10][10], transpose[10][10];
	int rows,columns,i,j;
	printf("enter number of rows and columns of matrix:");
	scanf("%d %d",&rows,&columns);
	printf("enter the elements of matrix:\n");
	for(i=0; i<rows; i++)
	{
		for(j=0; j<columns; j++)
		{
			printf("elements [%d][%d]:",i,j);
			scanf("%d",&matrix[i][j]);
			
		}
	}
	printf("\noriginal matrix:\n");	
	for(i=0; i<rows; i++)
	{
		for(j=0; j<columns; j++)
	{
	printf("%d\t",matrix[i][j]);
    }
    printf("\n");
		
	}
	for(i=0; i<rows; i++)
	{
		for(j=0; j<columns; j++)
		{
			transpose[j][i]=matrix[i][j];
		}
	}
	printf("\ntranspose matrix:\n");
	for(i=0; i<columns; i++)
	{
		for(j=0; j<rows; j++)
		{
			printf("%d\t",transpose[i][j]);
		}
		printf("\n");
	}
	return 0;
	
}
