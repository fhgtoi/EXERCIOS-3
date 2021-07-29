#include<stdio.h>

int main (void)

{

int m;

printf("Digite metros: ");

fflush(stdin);

scanf("%d", &m);

printf("\n centimetros: %d cm \n", m*100);

printf(" decimetros: %d dm \n", m*10);

printf(" milimetros: %d mm", m*1000);

fflush(stdin);

getchar();

return(0);

}
