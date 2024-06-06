#include<stdio.h>
int main ()
{
    int n, x, y;
    y = 1;
    
    scanf("%d", &x);
    
    for(x =x; x>0; x--)
    {    
        y = y*x;
    }
   
    
    printf ("%d", y);
    
    return 0;
}
