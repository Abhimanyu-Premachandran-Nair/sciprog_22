#include<stdio.h>
#include<stdlib.h>

//Input F(n-1) and F(n-2)

void fib(int *a, int *b);

int main(void){
  
  int n,i,f1 = 1,f0 = 0;
      
  printf("Enter the value of n :");
  scanf("%d",&n);
            
  if(n<1){
      	printf("The numbet is not positive\n");
	exit(1);
  }
         		    
  printf("The Fibonacci Series for given n :\n");
  printf("%d, %d, ",f0, f1);
            		          
  for (i=2;i<=n;i++){
       	fib(&f1,&f0);
	printf("%d, ",f1);
     			
	if((i+1)%10 == 0) printf("\n");
  }
  
  printf("\n");           		            				    
  return 0;
}

void fib(int *a, int *b){

  int next = *a+*b;
  *b=*a;
  *a = next;
}
