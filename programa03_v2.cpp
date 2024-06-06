#include<stdio.h>
  const int MAX = 6;
  int F[MAX];
  int i;
  
int main ()
{
  F[0] = 1;
  
  for(i=1; i<MAX; i++)
  {
    F[i] = i * F[i - 1];
    printf(" %d ", F[i]);
  }
  
    return 0;
}
