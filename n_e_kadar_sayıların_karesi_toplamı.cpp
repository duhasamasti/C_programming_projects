#include <stdio.h>
#include<math.h>


//n e kadar olan tam sayýlarýn karesi toplamý

int main()
{
	int n,i,total;
	
	printf("Enter a number==>");
	scanf("%d",&n);
	
	total=0;
	
	for(i=1;i<=n;i++)
	
	total= total+ i*i;
	
	printf("Sum of squares of the entered number==> %d",total);
	
	return 0;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}


