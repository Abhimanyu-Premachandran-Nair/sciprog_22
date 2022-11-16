#include<stdio.h>
#include<math.h>

double arctanh1(const double x,const double d){

  double arctan = 0; //Approx. result
  double element, value;
  int n=0;

  do{
	value = 2*n+1;
	element = pow(x,value)/value;
	arctan += element;
	n++;
  } while (fabs(element)>=d);
  
  return arctan;
}

double arctanh2(const double x){

  return ((log(1+x)-log(1-x))/2);
}

int main(){

  double d,x=-0.9;
  
  printf("Enter the precision for Maclaurin Series : ");
  scanf("%lf",&d);

  int l = 1000;
  double tan1[l],tan2[l];
  
  int i=0;

  while(x<=0.9 && i<l){
	tan1[i]=arctanh1(x,d);
	tan2[i]=arctanh2(x);
	printf("The difference between tan1 and tan2 when x=%lf is %.10lf\n",x,fabs(tan1[i]-tan2[i]));
	i++;
	x+=0.1;
  }
  return 0;
}
