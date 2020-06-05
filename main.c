#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define NOME_ALUNO "Rubens do Prado Silva"
#define EMAIL_ALUNO "rubenspradosilva@gmail.com"

    int n_cat = 1;
    char nome_cat[99];
    int n_itens_cat = 1;
    char nome_item[99];
    double quant_item[99];
    char uni_med [5] = {'Kg','UN','PC','PCT'};
    double v_uni[99];

    double v_cat[99];

    int nic=0;
    int nc=0;
    int ni=1;
    int vc=0;
    int qi=1;
    int vu=0;

    double desconto = 0;
    bool tipo_pg;
    double v_min_parcela=0;

int main()
{
    printf("\n Numero de categorias: (1 a 99)\n ");
    scanf("%d",&n_cat);

    for(nc=0;nc<n_cat;nc++){

        nc++;
        printf("\n Nome da categoria: (maximo 25 caracteres)\n ");
        scanf("%s",&nome_cat[nc]);
        printf("\n Numero de itens da categoria: (1 a 99)\n ");
        scanf("%d",&n_itens_cat);

            for(nic=0;nic<n_itens_cat;nic++,ni++,qi++,vc++,vu++){


                    printf("\n Nome do intem: (maximo 15 caracteres)\n ");
                    scanf("%s",&nome_item[ni]);
                    printf("\n Quantidade: (1 a 99)\n ");
                    scanf("%lf",&quant_item[qi]);
                    printf("\n Unidade de medida: (Kg | UN | PC | PCT)\n ");
                    scanf("%s",&uni_med);
                    printf("\n Valor unitario: (0.00 a 99.99)\n ");
                    scanf("%lf",&v_uni[vu]);

                    system("cls");
            }

    }

     printf("\n %d \n",n_cat);

     for (nc=0; nc<n_cat; nc++ ){

            printf("\n %s %d \n",nome_cat[nc],n_itens_cat);

                 for(int nic=0;nic<n_itens_cat;nic++,ni++,qi++,vc++,vu++){

                   printf("\n %s R$ %f \n",nome_item[ nic ],v_uni[vu]);

                }

                printf("%f",v_cat[vc]);

    }

    printf("Valor Total R$");

    if(v_total>50){
        printf("Deseja parcelar?");
        scanf("%s",forma_pg);

        switch(forma_pg){
        case 'A'
        printf("Valor a ser pago") }
    }

}
