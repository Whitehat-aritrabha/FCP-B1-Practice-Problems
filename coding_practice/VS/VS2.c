#include<stdio.h>
void main()
{
	printf("Enter the number:\n");
	long input;
	scanf("%li", &input);
	int truncation;
	truncation = input % 10;
	truncation = input - truncation;
	truncation = truncation / 10;
	int result;
	result = truncation % 10;
	printf("Digit of hundreds place:%d\n", result);
}
