#include<stdio.h>

int iterativeGCD(int a,int b){
  int temp;
  while (b!=0){
	temp=b;
	b=a%b;
	a=temp;
  }
  return a;
}

int recursiveGCD(int a,int b){
  if(b==0) return a;
  else return (recursiveGCD(b,a%b));
}

int main(){
  
  int a,b,err;

  printf("Enter two positive integers : ");
  err = scanf("%d %d",&a,&b);

  if (err !=2){
	printf("\nEnter two positive integers\n");
	return 1;
  }

  if (a<=0 || b<=0){
	printf("\nThe inputs are not positive");
	return 1;
  }

  printf("\nIterativeGCD(%d,%d)=%d",a,b,iterativeGCD(a,b));
  printf("\nRecursiveGCD(%d,%d)=%d",a,b,recursiveGCD(a,b));

  printf("\n");
  return 0;
}
