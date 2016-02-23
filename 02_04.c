/*
 ============================================================================
 Name        : 02_04.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int day = 12 + 5 + 4;
	double width = 12.00;
	double height = 10.0;
	double  perimeter = width + width + height + height;
	double area = height * width; //Extra code to use the variables to calculate height

	printf("days: %d \n", day);
	printf("perimeter: %f \n", perimeter);
	printf("area: %f²", area);

	return EXIT_SUCCESS;

}
