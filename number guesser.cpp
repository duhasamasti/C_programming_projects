#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int sayi=0,guess=0;
	int times=0;
	
	
	//random sayý üretildi 1-100
	srand(time(NULL));
	sayi= rand() % 100+1;
	
	printf("enter a guess==>");
	scanf("%d",&guess);
	
	while(guess!=sayi) {
		if(guess>sayi) {
			printf("down=");
			scanf("%d",&guess);
			times++;
		}
		
		if(guess<sayi) {
			printf("up=");
			scanf("%d",&guess);
			times++;
		}
        	
	}	
	
	printf("you found it %d. times",times+1);
    return 0;
	
	
	
}
	
	

