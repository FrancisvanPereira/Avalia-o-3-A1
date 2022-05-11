#include<stdio.h>

int main(void)
{
  char categoria;
  int quantidade = 0, soma = 0, total = 0;
  float media;
  
  do
  {
    printf("Informe a categoria: ");
    fflush (stdin);
    scanf("%c", &categoria);
    if (categoria != 'A' && categoria != 'B' && categoria != 'C')
    {
      break;
    }

    do
    {
      printf("Informe a quantidade: ");
      scanf("%d", &quantidade);

    } while (quantidade <= 0);
    
    soma = quantidade + soma;
    total++;
    media = (float) soma / (float) total;

  } while (categoria == 'A' || categoria == 'B' || categoria == 'C');
  
  printf("A media dos produtos eh %.2f", media);

  return 0;
}

