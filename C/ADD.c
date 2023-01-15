#include<stdio.h>

int main(){
	
	int x, y, sum;
	
	printf("Enter first number: ");
	scanf("%d", &x);
	
	printf("Enter second number: ");
	scanf("%d", &y);

	sum = x + y;

	printf("Sum:\t %d + %d = %d \n", x, y, sum);

	return 0;
}
