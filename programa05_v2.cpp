#include<stdio.h>

float sb, grat, imp;
int main()

{
 printf("\n Entre com o salário do funcionário: \n");
 scanf(" %f", &sb);
 
 grat = sb *5/100;
 imp = sb *7/100;
 sb = sb + grat - imp;
 
 printf("\n O Salário Líquido: %f", sb);
    

}
