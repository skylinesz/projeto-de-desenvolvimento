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
}
