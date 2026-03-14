#include <stdio.h>
int main(){
	
	int number1, number2, substract;
	
	printf("enter two numbers=");
	scanf("%d%d",&number1,&number2);
	substract=number1-number2;
	
	printf("%d-%d=%d", number1, number2,substract);
	return 0;
}
