#include<stdio.h>

int main(){

  int n=5,p=3,q=4; //initializing size variables
  double A[n][p],B[p][q],C[n][q]; //Declaring matrices A,B, and C
  int i,j,k; //Declaring loop variables

  //Initializing matrices A, B and C

  for(i=0;i<n;i++){
	for(j=0;j<p;j++){
		A[i][j] = i+j;
	}
  }

  for(i=0;i<p;i++){
        for(j=0;j<q;j++){
                B[i][j] = i-j;
        }
  }

  for(i=0;i<n;i++){
        for(j=0;j<q;j++){
                C[i][j] = 0.0;
        }
  }

  matxmult(n,p,q,A,B,C);

  //Printing the matrices

  printf("\nA : \n");
  for(i=0;i<n;i++){
        for(j=0;j<p;j++){
                printf("%3.0f ",A[i][j]);
        }
	printf("\n");
  }

  printf("\nB : \n");
  for(i=0;i<p;i++){
        for(j=0;j<q;j++){
                printf("%3.0f ",B[i][j]);
        }
	printf("\n");
  }

  printf("\nC : \n");
  for(i=0;i<n;i++){
        for(j=0;j<q;j++){
                printf("%3.0f ",C[i][j]);
        }
	printf("\n");
  }


  return 0;
}
