#include<stdio.h>
#include<math.h>

int main(void){
  
  //Initializing the variables
  int N = 12, i;
  float a=0.0,b_deg=60.0;
  float b_rad, area, mult_rad;

  //Convert degrees to radians
  b_rad = (M_PI * b_deg)/180.0;
  printf("pi/3 in radians = %f\n",b_rad);

  //Finding Area under the curve
  area = tan(a) + tan(b_rad);

  for(i=0;i<60;i=i+5){
	area = area+2*tan((M_PI*i)/180.0);
  }

  //Multiply partial area by (pi/3)/(2*12)
  mult_rad = (M_PI*(b_deg/(2*N)))/180.0;
  area = mult_rad*area;
 
  printf("Approx. area = %f\nExact Area = %f\n",area,log(2.0)); 

  return 0;
}
