 #include <stdio.h>
 #include <locale.h>
 
void imprime_par(int a, int b);
int main(int argc, char **argv)
{
    imprime_par(3,4);
    imprime_par(-2,8);
    return 0;
}
void imprime_par(int a, int b)
{
   printf("{ %d, %d }\n",a,b);
}
