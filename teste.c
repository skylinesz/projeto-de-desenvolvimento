#include <stdio.h>
int main()
{
    int p[2], partida, destino, i = 0, m[2], j=0, H[3][3];
    char usuario;
    printf("Classificacao do usuario\nM = motorista P = passageiro: ");
    scanf("%c", &usuario);
    if ("%c", usuario == 'M')
    {
        printf("selecione local de partida\n1 -> Contagem\n2 -> Para de Minas\n3 -> Juatuba\n4 -> Belo Horizonte\n5 -> Betim\n6 -> Florestal\n");
        scanf("%d", &m[i]);
        i++;
        printf("selecione local de destino\n1 -> Contagem\n2 -> Para de Minas\n3 -> Juatuba\n4 -> Belo Horizonte\n5 -> Betim\n6 -> Florestal\n");
        scanf("%d", &m[i]);
        printf("digite os 2 ultimos numeros da placa do veiculo: ");
        scanf("%d", &H[j][2]);
        j++;
    }
    else if ("%c", usuario == 'P')
    {
        printf("selecione local de partida\n1 -> Contagem\n2 -> Para de Minas\n3 -> Juatuba\n4 -> Belo Horizonte\n5 -> Betim\n6 -> Florestal\n");
        scanf("%d", &p[i]);
        i++;
        printf("selecione local de destino\n1 -> Contagem\n2 -> Para de Minas\n3 -> Juatuba\n4 -> Belo Horizonte\n5 -> Betim\n6 -> Florestal\n");
        scanf("%d", &p[i]);
    }
    else
    {
        printf("Classificacao invalida");
    }

    j = 0;
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
    
    printf("H  M  placa\n");
    for (i = 0; i<3; i++)
    {
        for (j = 0; j<1; j++)
        {
            printf("%d ", H[j][i]);
        }
    }
}
