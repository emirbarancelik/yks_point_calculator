#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	
	float turkish,math1,social,science,math2,physics,biology,chemical,tyt,ayt,totalpoint,hss;
	printf("*****YKS POINT CALCULATOR*****");
	printf("\n\n");
	
	printf("Enter your turkish total: ",turkish);
	scanf("%f",&turkish);
	
	printf("Enter your math1 total: ");
	scanf("%f",&math1);
	
	printf("Enter your social total: ");
	scanf("%f",&social);
	
	printf("Enter your science total: ");
	scanf("%f",&science);
	
	printf("Enter your math2 total: ");
	scanf("%f",&math2);
	
	printf("Enter your physics total: ");
	scanf("%f",&physics);
	
	printf("Enter your chemical total: ");
	scanf("%f",&chemical);
	
	printf("Enter your biology total: ");
	scanf("%f",&biology);
	
	printf("Enter your high school score: ");
	scanf("%f",&hss);
	
	tyt=(math1*1.32)+(turkish*1.32)+(science*1.36)+(social*1.36);
	ayt=(math2*3)+(physics*2.85)+(chemical*3.07)+(biology*3.07);
	
	totalpoint=  tyt + ayt + (hss*0.6);
	
	printf("Total YKS point: %f",totalpoint);
	
	
	
	return 0;
}
