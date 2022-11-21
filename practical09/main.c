#include<stdio.h>
#include<stdlib.h>
#include"magic_square.h"
#define MAX_FILE_NAME 100

//Function for counting the number of lines of the file

int get_num_lines(char filename[MAX_FILE_NAME]){
  
  FILE *fp;
  fp = fopen(filename,"r");
  int ch_read;
  int count = 0;

  while((ch_read = fgetc(fp)) != EOF){
	if(ch_read == '\n') count++;
  }
  printf("Number of lines : %d\n",count);
  fclose(fp);
  return count;
}

int main(){

  //Read the file

  FILE *file;
  char filename[MAX_FILE_NAME];
  printf("\nEnter the file name : ");
  scanf("%s",&filename);

  // Count the number of lines

  int n = get_num_lines(filename);

  file = fopen(filename,"r");

  int i,j;
  int **magic_square = malloc(n*sizeof(int *));

  for(i=0;i<n;i++) magic_square[i] = malloc(n*sizeof(int));

  for(i=0;i<n;i++){
	for(j=0;j<n;j++){
		fscanf(file,"%d",&magic_square[i][j]);
	}
  }

  int flag = isMagicSquare(magic_square,n);
  
  if(flag ==1) printf("\nThe square is a magic square!!\n");
  else printf("\nThe square is not a magic square!!\n");
  
  for(i=0;i<n;i++) free(magic_square[i]);
  free(magic_square);
  
  fclose(file);

  return 0;
}
