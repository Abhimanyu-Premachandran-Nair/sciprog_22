#include<stdio.h>
#include<math.h>

//Function for converting degrees to radians

float to_rad(float deg){
  return M_PI*deg/180.0;
}

//Function using Trapezoidal Rule

float trap(float a, float b, int N, float array[N+1]){
  float sum = array[0]+array[N];
  int i;
  for(i=0;i<N;i++){
	sum+= 2*array[i];
  }
  return (b-a)*sum/(2*N);
}

//Main function

int main(void){
  
  float a = 0.0,b = 60.0;
  int N = 12,i;
  float step = (b-a)/N;
  float tan_array[N+1];
  
  for(i=0;i<=N;i++){
	tan_array[i] = tan(to_rad(step*i));
  }

  float result = trap(to_rad(a),to_rad(b),N,tan_array);
  printf("The Approx. value = %f\n",result);
  printf("The actual value = %f\n",logf(2));
  return 0;
}
