#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int factorial(int n){

  if (n<0){
	printf("Error : n is not a positive value");
	return(-1);
  }
  else if (n==0) return 1;
  else return (n*factorial(n-1));
}

int main(){

  int i, order;
  double e, *terms;

  //Order of the polynomial  
  printf("Enter the order of the polynomial : ");
  if (scanf("%d",&order)!=1){
	printf("Invalid order entered");
	return 1;
  }

  //Allocating space for terms
  terms = malloc(order*sizeof(double));
  
  for(i=0;i<order;i++){
	terms[i] = 1.0/(double)factorial(i+1);
	printf("\nTerm %d of e for order %d is %1.14lf\n",i+1,order,terms[i]);
  }

  e=1.0;
  
  for(i=0;i<order;i++){
	e+=terms[i];
  }

  free(terms);

  printf("\ne is estimated as %.10lf. with difference %.10lf.\n\n",e,e-exp(1.0));
}
