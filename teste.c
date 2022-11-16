#include <stdio.h>
int main()
{
    int p[2], i = 0, m[2], j=0, H[3][3];
    char usuario;
    printf("Classificacao do usuario\nM = motorista P = passageiro: ");
    scanf("%c", &usuario);
    if ("%c", usuario == 'M')
    {
        printf("selecione local de partida\n1 -> Contagem\n2 -> Para de Minas\n3 -> Juatuba\n4 -> Belo Horizonte\n5 -> Betim\n6 -> Florestal\n");
        scanf("%d", &m[i]);
        if (m[i] > 6 || m[i] < 1)
        {
            printf("local invalido");
            return 0;
        }
        i++;
        printf("selecione local de destino\n1 -> Contagem\n2 -> Para de Minas\n3 -> Juatuba\n4 -> Belo Horizonte\n5 -> Betim\n6 -> Florestal\n");
        scanf("%d", &m[i]);
        if (m[i] > 6 || m[i] < 1)
        {
            printf("local invalido");
            return 0;
        }
        printf("digite os 2 ultimos numeros da placa do veiculo: ");
        scanf("%d", &H[j][2]);
        j++;
    }
    else if ("%c", usuario == 'P')
    {
        printf("selecione local de partida\n1 -> Contagem\n2 -> Para de Minas\n3 -> Juatuba\n4 -> Belo Horizonte\n5 -> Betim\n6 -> Florestal\n");
        scanf("%d", &p[i]);
        if (p[i] > 6 || p[i] < 1)
        {
            printf("local invalido");
            return 0;
        }
        i++;
        printf("selecione local de destino\n1 -> Contagem\n2 -> Para de Minas\n3 -> Juatuba\n4 -> Belo Horizonte\n5 -> Betim\n6 -> Florestal\n");
        scanf("%d", &p[i]);
        if (p[i] > 6 || p[i] < 1)
        {
            printf("local invalido");
            return 0;
        }
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
    p[0] = 2;
    p[1] = 5;
    if ("%c", usuario == 'M')
    {
        if (m[0] == p[0]);
        {
            if(m[1] == p[1])
            {
                printf("viagens compativeis:\n");
                printf("H  M  placa\n");
                for (i = 0; i<3; i++)
                {
                    for (j = 0; j<1; j++)
                    {
                        printf("%d ", H[j][i]);
                    }
                }
            }
        }
    }

    if ("%c", usuario == 'P')
    {
        if (p[0] == m[0]);
        {
            if(p[1] == m[1])
            {
                printf("viagens compativeis:\n");
            }
        }
    }
}
