#include<stdio.h>
void main()
{
	printf("Input:\n");
	int input;
	scanf("%d", &input);
	int new;
	new = input - (input % 100);
	int ten;
	ten = input %10;
	int reduced;
	reduced = (input - ten)/10;
	int hundred;
	hundred = reduced % 10;
	int new_value;
	new_value = new + (ten*10)+hundred;
	printf("New Number:%d\n", new_value);
}

