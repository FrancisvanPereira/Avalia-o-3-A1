#include<stdio.h>

int situacao1, situacao2, situacao3;

int main(void)
{

    printf("Paciente se sente bem?\tResponda com 1-sim ou 2-nao\n");
    scanf("%d", &situacao1);

    if (situacao1 == 1)
    {
        printf("Paciente esta saudavel.");
    }
        else if (situacao1 == 2)
        {
            printf("Paciente sente dor?\tResponda com 1-sim ou 2-nao\n");
            scanf("%d", &situacao2);
        }

    if (situacao2 == 1)
    {
        printf("Paciente esta doente");
    }
        else if (situacao2 == 2)
        {
            printf("A temperatura do paciente eh maior ou menor que 37?\tResponda com 1-maior ou igual ou 2-menor\n");
            scanf("%d", &situacao3);        
        }

    if (situacao3 == 1)
    {
        printf("Paciente esta doente.");
    }
        else if (situacao3 == 2)
        {
            printf("Paciente esta saudavel.");
        }

    return 0;
}