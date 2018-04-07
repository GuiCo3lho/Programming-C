//implementaçao das funções
#include <stdio.h>
#include <stdlib.h>
#include <arvore.h>



void VamosComecar(void)
{
    int idade;
    printf("Oii! Qual sua idade?\n");
    scanf("%d",&idade);
    printf("Sua idade é %d\n", idade);
    return;
}


void Multiplica(void)
{
  int x,y,resultado;
  printf("Digite o primeiro valor\n");
  scanf("%d", &x);
  printf("Digite o segundo valor\n");
  scanf("%d", &y);
  resultado = x*y;
  printf("Resultado: %d\n", resultado);

}
