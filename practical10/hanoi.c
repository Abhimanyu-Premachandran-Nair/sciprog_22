#include<stdio.h>
#include<stdlib.h>

void hanoi(int n,int one,int two,int three){

  //If only one disc in rod 1

  if(n==1) printf("Move disc from %d to %d\n",one,three);
  else{
	hanoi(n-1,one,three,two);
	printf("Move disc from %d to %d\n",one,three);
	hanoi(n-1,two,one,three);
  }
}

int main(){
  
  int h;
  printf("Enter the number of disc(s) : ");
  scanf("%d",&h);
  if(h<1){
	printf("\nInvalid number of disc(s) entered.\n");
	return 1;
  }
  printf("\nSolution for %d discs\n",h);
  hanoi(h,1,2,3);
  
  return 0;
}
