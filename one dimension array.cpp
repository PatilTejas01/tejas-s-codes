#include <stdio.h>
int main()
{
    int array[7] = {4,17,54,28,46,8,45};
    int i;
    printf("Elements of the array are:\n");
    for(i = 0; i < 7; i++)
    {
        printf("array[%d] = %d\n",i,array[i]);
    
    }
    return 0;
}
