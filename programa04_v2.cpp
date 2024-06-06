#include<stdio.h>
  const int MAX = 6;
  int x;
  int i;
  
int main ()
{

  for(i=0; i<MAX; i++)
  {
    if(i <= 1)
        x = i;
    else 
    {
        x = x + i - 2;
      
    }
    printf(" %d ", x);
  }
  
    return 0;
}
