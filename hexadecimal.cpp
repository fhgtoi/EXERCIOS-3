#include <stdio.h>
#include <conio.h>
// Biblioteca para o programa buscar as funções!!

int main()
{
    int x;
    printf("Digite um numero e lhe mostrarei o correspondete hexadecimal e octal!!");
    scanf("%d",&x);
    
    printf("%d em octal e: %o\n",x,x );
    printf ("%d em hexadecimal é: %x\n",x,x); //"x" minusculo i numero sera minusculo
    printf("%d em hexadecimalé: %X\n",x,x);  //"x" maiusculo numero sera maiusculo
    
    getch();
    
}

    
    
