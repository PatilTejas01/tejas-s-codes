#include <stdio.h>
int main(){
	int array[9] = {22, 34, 54, 64, 867, 654, 987, 543, 234};
	int *ptr;
	int i;
	ptr = array;
	printf("accessing array element using pointers:\n");
	for(i = 0; i < 9; i++)
	{
		printf("Element %d = %d\n ",i,*(ptr + i));
		
	}
	return 0;
}
