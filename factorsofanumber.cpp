#include <stdio.h>

int main(){
	/* finding the factors of an Integer
	 30 = 1,2,3,5,6,15,30 */
	 
	 int number;
	 int i;
	 char ch;
	 
	 do{
	
	 
	 printf("enter an integer");
	 scanf("%d",&number);
	 
	 printf("Factors:\n");
	 
	 for(i=1;i<=number;i++){
	 	if(number % i == 0){
	 		printf("%d ",i);
		 }
	 }
	 printf("\nwould you like to continue? (Y/N)\n");
	 scanf(" %c",&ch);
	 }while(ch=='Y');
	 printf("Program terminated.");
	
	 
	return 0;
}
