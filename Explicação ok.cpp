// Este programa soma todos os n�meros inteiros entre 1 e o numero 'n' digitado pelo usu�rio 
// e exibe o resultado dessa soma na tela.
#include <stdio.h>
 
int soma(int n)
{
    if(n == 1)
        return 1;
    else
        return ( n + soma(n-1) );
}
 
int main()
{
    int n;
    printf("Digite um inteiro positivo: ");
    scanf("%d", &n);
 
    printf("Soma: %d\n", soma(n));
}
