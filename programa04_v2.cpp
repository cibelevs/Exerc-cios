#include<stdio.h>
  const int MAX = 6;
  int F[MAX];
  int i;
  
int main ()
{

  for(i=0; i<MAX; i++)
  {
    if(i <= 1)
        F[i] = i;
    else 
    {
        F[i] = F[i - 1] + F[i - 2];
    }
    printf(" %d ", F[i]);
  }
  
    return 0;
}
