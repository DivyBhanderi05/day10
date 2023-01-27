#include<stdio.h>
main(){
	
	int a,b,c,d,e;
	
	printf("Enter A : ");
	scanf("%d",&a);
	
	printf("Enter B : ");
	scanf("%d",&b);
	
	printf("Enter C : ");
	scanf("%d",&c);
	
	printf("Enter D : ");
	scanf("%d",&d);
	
	printf("Enter E : ");
	scanf("%d",&e);
	
	a<b
		?b<c
		 	?c<d 
				?d<e?printf("E is Max")
				 	:printf("D is Max")	
		 		:c<e?printf("E is Max")
		 			:printf("C is Max")
			:b<d?d<e?printf("E is Max")
				 	:printf("D is Max")
				:b<e?printf("E is Max")
		 			:printf("B is Max")		 	
    	:a<c  
			?c<d
				?d<e?printf("E is Max")
				 	:printf("D is Max")	
		 		:c<e?printf("E is Max")
		 			:printf("C is Max")
			:a<d?d<e?printf("E is Max")
				 	:printf("D is Max")
				:a<e?printf("E is Max")
		 			:printf("A is Max");		

}
