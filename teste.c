#include <stdio.h>


int main()
{
    int coordenada[2], partida, destino, i = 0;
    char usuario;
    printf("Classificacao do usuario\nM = motorista P = passageiro: ");
    scanf("%c", &usuario);
    if ("%c", usuario == 'M')
    {
        printf("selecione local de partida\n1 -> Contagem\n2 -> Para de Minas\n3 -> Juatuba\n4 -> Belo Horizonte\n5 -> Betim\n6 -> Florestal\n");
        scanf("%d", &coordenada[i]);
        i++;
        printf("selecione local de destino\n1 -> Contagem\n2 -> Para de Minas\n3 -> Juatuba\n4 -> Belo Horizonte\n5 -> Betim\n6 -> Florestal\n");
        scanf("%d", &coordenada[i]);
    }
    else if ("%c", usuario == 'P')
    {
        printf("selecione local de partida\n1 -> Contagem\n2 -> Para de Minas\n3 -> Juatuba\n4 -> Belo Horizonte\n5 -> Betim\n6 -> Florestal\n");
        scanf("%d", &coordenada[i]);
        i++;
        printf("selecione local de destino\n1 -> Contagem\n2 -> Para de Minas\n3 -> Juatuba\n4 -> Belo Horizonte\n5 -> Betim\n6 -> Florestal\n");
        scanf("%d", &coordenada[i]);
    }
    else
    {
        printf("Classificacao invalida");
    }
    if ("%c", usuario == 'M')
    {
        printf("horario que pretende partir\n");
        for (i = 0; i<2; i++)
        {
          
            if (i == 0)
            {
            
                printf("horas: ");
                scanf("%d", &H[j][i]);
            }
            else
            {
                printf("minutos: ");
                scanf("%d", &H[j][i]);
            }
        }
    }


    if ("%c", usuario == 'P')
    {
        printf("horario que deseja partir\n");
        for (i = 0; i<2; i++)
        {
          
            if (i == 0)
            {
            
                printf("horas: ");
                scanf("%d", &H[j][i]);
            }
            else
            {
                printf("minutos: ");
                scanf("%d", &H[j][i]);
            }
        }
    }
    
    
    for (i = 0; i<2; i++)
    {
        for (j = 0; j<1; j++)
        {
            printf("%d ", H[j][i]);
        }
    }
}
