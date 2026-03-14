#include<stdio.h>
int main()
{ int n, First=0,Second=1,Next,i;
printf("enter the number of terms:");
scanf("%d",&n);
printf("Fibonachi series:");
for ( i = 0 ; i < n; i++)
{
	if(i<=1)
	{
		Next = i;
	}
	else
	{ 
	Next = First + Second;
	First = Second;
	Second = Next;
	}
	printf("%d \t", Next);
}
return 0;
}
