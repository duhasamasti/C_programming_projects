#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//n e kadar tek  sayý toplama

int main(int argc, char *argv[]) {
	
	int i,n,result;
	
	printf("Enter a number==>");
	scanf("%d",&n);
	
	result=0;
	i=1;
	
	while(i<=n)
	{
		result=result+i;
		i=i+2;
	}
	
	printf("Sum of numbers %d==> %d",n,result);
	
	return 0;
}
