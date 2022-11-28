#include <stdio.h>
#include <stdlib.h>
typedef struct conducao tipoConducao;
struct conducao
{
    char cor[30], placa[7], carro[30], motorista[30];
};
typedef struct carona tipoCarona;
struct carona
{
    char nome[30];
};
int main()
{
    tipoConducao conducao;
    tipoCarona carona;
    int p[2], i = 0, m[2], j=0, H[2][2];
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
        printf("digite a placa do veiculo: ");
        fflush(stdin);
        gets(conducao.placa);
        printf("digite o modelo do veiculo: ");
        fflush(stdin);
        gets(conducao.carro);
        printf("digite a cor do veiculo: ");
        fflush(stdin);
        gets(conducao.cor);
        printf("digite seu nome: ");
        fflush(stdin);
        gets(conducao.motorista);
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
        printf("digite seu nome: ");
        fflush(stdin);
        gets(carona.nome);
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
                printf("H  M \n");
                for (i = 0; i<2; i++)
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
