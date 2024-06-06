#include<stdio.h>
  const int MAX = 6;
  int x;
  int i;
  
int main ()
{
  x = 1;
  
  for(i=1; i<MAX; i++)
  {
    x = i * x ;
    printf(" %d ", x);
  }
  
    return 0;
}
