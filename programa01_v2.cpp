#include<stdio.h>
int main ()
{
    int n, x, y;
    y = 1;
    
    scanf("%d %d", &n, &x);
  
    for(x =x; x > 0; x--)
    { 
        y = y*n;
    }   
    
    printf ("%d", y);
    
    return 0;
}
