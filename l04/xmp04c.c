#include <stdio.h>
#include <stdlib.h>

/* Lagrange n Point Interpolation */
int main(void){
  int n=3,i,j;
  n++;
  double x[n], f[n], X, F, k;
  for(i=0;i<n;i++){
    printf("x%d f%d> ", i, i);
    scanf("%lf %lf", &x[i], &f[i]);
  }
  printf( "x for f(x)> " );
  while(scanf( "%lf", &X ) != EOF){
    F=0.0;
    for(i=0;i<n;i++){
      k=1.0;
      for(j=0;j<n;j++){
        if(j!=i){
          k*=(X-x[j]);
          if(x[i]-x[j]==0){
            puts("error");
          }
          k/=(x[i]-x[j]);
        }
      }
      F+=k*f[i];
    }
    printf( "f(%lf) = %lf\n", X, F );
    printf( "x for f(x)> " );
  }
  printf("\n");
  return 0;
}