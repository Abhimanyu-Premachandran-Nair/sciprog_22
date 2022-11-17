#include<stdio.h>
#include<stdlib.h>

//Allocate the array

int *allocatearray(int n){
  int *p;
  p=(int *) malloc(n*sizeof(int));
  if(p==NULL) printf("Error in allocating the memory");
  return p;
}

//Fill with ones

void fillwithones(int *array, int n){
  int i;
  for(i=0;i<n;i++){
	array[i]=1;
  }
}

//Print the array

void printarray(int *array,int n){
  int i;
  for(i=0;i<n;i++){
        printf("a[%d]=%d\n",i,array[i]);
  }
}

//Deallocate array

void freearray(int *array){
  free(array);
}

int main(){

  int n, *a;

  printf("Enter the size of the array : ");
  scanf("%d",&n);

  a = allocatearray(n);
  fillwithones(a,n);
  printarray(a,n);
  freearray(a);
  a=NULL;

 return 0;
}
