#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#define pi 3.14

int main(int argc, char *argv[]) {
	float r,circumference,area;
	
	printf("Enter your radius");
	scanf("%f",&r);
	
	circumference=2*pi*r;
	area=pi*r^2;
	
	printf("circumference==> %f\n ",circumference);
	printf("area==> %f",area);
	
	
	
	
	
	
	
	return 0;
}
