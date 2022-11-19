#include<stdio.h>
#include<stdlib.h>
#include<time.h>

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
  
  int a,b;
  clock_t start, end;

  //Generating random integers between 1 and 12
  
  srand(time(NULL));
  a = (rand()%12)+1;
  b = (rand()%12)+1;

  start = clock();

  printf("\nIterativeGCD(%d,%d)=%d",a,b,iterativeGCD(a,b));
  printf("\nRecursiveGCD(%d,%d)=%d",a,b,recursiveGCD(a,b));

  end = clock();
  
  printf("\nTotal time : %ds",(double) (end-start)/CLOCKS_PER_SEC);

  printf("\n");
  return 0;
}
