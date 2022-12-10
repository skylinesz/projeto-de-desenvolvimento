#include <stdio.h>
#include <stdlib.h>

typedef struct conducao tipoConducao;
struct conducao
{
    char cor[30], placa[8], carro[30], motorista[30];
    int local[2], telefoneM;
};


typedef struct carona tipoCarona;
struct carona
{
    char nome[30], local[2];
    int telefoneP
};


void main()
{
    tipoConducao conducao, *m;
    tipoCarona carona, *c;
    FILE *arqP;
    FILE *arqM;
    m = &conducao;
    c = &carona;
    int i=0, count=0;
    char usuario, j;


    printf("bem vindo!\nescolha uma classificacao para iniciar...\n");
    printf("Classificacao do usuario\nM = motorista P = passageiro: ");
    scanf("%c", &usuario);
    
    if (usuario == 'M')
    {
        printf("selecione local de partida\n1 -> Contagem\n2 -> Para de Minas\n3 -> Juatuba\n4 -> Belo Horizonte\n5 -> Betim\n6 -> Florestal\n");
        scanf("%d", &conducao.local[0]);
        if (conducao.local[0] > 6 || conducao.local[0] < 1)
        {
            printf("local invalido");
            return 0;
        }
        printf("selecione local de destino\n1 -> Contagem\n2 -> Para de Minas\n3 -> Juatuba\n4 -> Belo Horizonte\n5 -> Betim\n6 -> Florestal\n");
        scanf("%d", &conducao.local[1]);
        if (conducao.local[1] > 6 || conducao.local[1] < 1)
        {
            printf("local invalido");
            return 0;
        }
        else
        {
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
            printf("digite seu numero de telefone para contato(somente numeros): ");
            scanf("%d", &conducao.telefoneM);
            arqM = fopen("dadosM.dat", "a+b");
            if (arqM == NULL)
            {
                printf("não foi possivel abrir o arquivo\n");
                return 0;
            }
            else
            {
                fwrite(m, sizeof(tipoConducao), 1, arqM);
                printf("registro bem sucedido\n");
            }
            fclose(arqM);
        }
    }
    
    
    else if (usuario == 'P')
    {
        printf("selecione local de partida\n1 -> Contagem\n2 -> Para de Minas\n3 -> Juatuba\n4 -> Belo Horizonte\n5 -> Betim\n6 -> Florestal\n");
        scanf("%d", &carona.local[0]);
        if (carona.local[0] > 6 || carona.local[0] < 1)
        {
            printf("local invalido");
            return 0;
        }
        i++;
        printf("selecione local de destino\n1 -> Contagem\n2 -> Para de Minas\n3 -> Juatuba\n4 -> Belo Horizonte\n5 -> Betim\n6 -> Florestal\n");
        scanf("%d", &carona.local[1]);
        if (carona.local[1] > 6 || carona.local[1] < 1)
        {
            printf("local invalido");
            return 0;
        }
        printf("digite seu nome: ");
        fflush(stdin);
        gets(carona.nome);
        printf("digite seu numero de telefone para contato(somente numeros): ");
        scanf("%d", &carona.telefoneP);
        arqP = fopen("dadosP.dat", "a+b");
        if (arqP == NULL)
        {
            printf("não foi possivel abrir o arquivo\n");
            return 0;
        }
        else
        {
            fwrite(c, sizeof(tipoCarona), 1, arqP);
            printf("registro bem sucedido\n");
        }
        fclose(arqP);
    }


    else
    {
        printf("Classificacao invalida");
        return 0;
    }

   
    printf("viagens compativeis\n--------------------------\n");
    if (usuario == 'M')
    {
        arqP = fopen("dadosP.dat", "rb");
        while (fread(&carona, sizeof(carona), 1, arqP) >0)
        {

            if (conducao.local[0] == carona.local[0])
            {
                if (conducao.local[1] == carona.local[1])
                {
                    printf("passageiro -> %s\ntelefone -> %d\n--------------------------\n", carona.nome, carona.telefoneP);
                }
            }
        }
        fclose(arqP);
    }
    
    
    if (usuario == 'P')
    {
        arqM = fopen("dadosM.dat", "rb");
        while (fread(&conducao, sizeof(conducao), 1, arqM) >0)
        {
            if (carona.local[0] == conducao.local[0]);
            {
                if(carona.local[1] == conducao.local[1])
                {
                    printf("carro -> %s, %s\nplaca -> %s\nmotorista -> %s\ntelefone -> %d\n--------------------------\n", conducao.carro, conducao.cor, conducao.placa, conducao.motorista, conducao.telefoneM);
                }
            }
        }
    }
}
