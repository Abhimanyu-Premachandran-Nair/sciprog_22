#include<stdio.h>

int main(void){
  
  int i;
  double a;
  int ierr;
  
  //Get values from the user
  //  
  printf("Enter an integer and a double :");
  ierr = scanf("%d %lf",&i,&a);
        
  if(ierr!=2) 
	printf("Invalid Inputs\n");
            		
  return 0;
}
