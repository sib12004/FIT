#include <stdlib.h>
#include <float.h>
#include <time.h>
#include <stdio.h>
double fRand(double fMin, double fMax);
double inject(double i);
double error_rate = 90;
srand(time(NULL));
//function
double inject(double i)
{
  int error_range = 100/error_rate;
  //if(rand()%error_range == 1){
  if((double)rand() / RAND_MAX * 100 <error_rate){
      printf("Perturbed\n");
      return fRand(DBL_MIN, DBL_MAX);
    }
  else{
    printf("Not Perturbed\n");
      return i;
      }
}
//function
double fRand(double fMin, double fMax)
  {
      double f = (double)rand() / RAND_MAX;
      double random = fMin + f * (fMax - fMin);
      return random;
  }