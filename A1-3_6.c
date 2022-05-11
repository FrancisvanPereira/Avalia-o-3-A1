#include <stdio.h>

int main ()
{
	
	int num, cont=1, con;
    char verif;
	
    do
    {
        cont=0;

	    printf ("Informe um numero positivo: ");
	    scanf ("%d", &num);
	
	    while (cont <= num)
        {	
	        printf (" \n");
	
	        for (con = 1; con <= cont; con++)
            {
		        printf (" %d ", cont);
            }
            cont ++;

        }

        printf("\n\nDeseja digitar outro numero? <S ou N>\n");
        scanf(" %c", &verif);

    }while(verif == 'S' || verif == 's');

return 0;
}
