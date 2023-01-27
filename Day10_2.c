#include<stdio.h>

main(){
	
	int a,b,c;
	
	printf("Enter A : ");
	scanf("%d",&a);
	
	printf("Enter B : ");
	scanf("%d",&b);
	
	printf("Enter C : ");
	scanf("%d",&c);
	
	a<b?b<c?printf("C is Max"):printf("B is Max"):a<c?printf("C is Max"):printf("A is Max");
}
