#include<stdio.h>
  const int max = 6;
  int F[max];
  int i;
  
int main ()
{
  F[0] = 1;
  
  for(i=1; i<max; i++)
  {
    F[i] = i * F[i - 1];
    printf(" %d ", F[i]);
  }
  
    return 0;
}
