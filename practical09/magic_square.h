int isMagicSquare(int **square,const int n){
  
  if (n<0) return 0;

  int magic_num = 0;
  int od_sum = 0;
  int i,j;
  
  //Sum of off diagonals
  for(i=0;i<n;i++){
	magic_num += square[i][i];
	od_sum += square[i][n-i-1];
  }

  if(od_sum != magic_num) return 0;


  for(i=0;i<n;i++){
	int rowSum=0,colSum=0;
	
	for(j=0;j<n;j++){
		rowSum += square[i][j];
		colSum += square[j][i];
	}
	
	if(rowSum != magic_num || colSum != magic_num) return 0;
  }
  return 1;
}
