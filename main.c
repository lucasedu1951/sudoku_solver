/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>

int main(){
    int MatrizFixa[9][9]={0}, i , j , n=0;

    printf("\n Digite os números iniciais para o desafio colocando o valor 0 para os números a serem descobertos: \n\n");

    
    do
    {
    for (i=0; i<9; i++)
        for(j=0; j<9; j++)
        {
            printf("\n Elemento[%d][%d] = " , i, j);
            scanf("%d", &MatrizFixa[i][j]);
        }

    printf("\n\n**********Essa é a matriz do desafio?**********");
    printf("Se sim, digite 1 e confirme, se não, digite 0 e confirme para reescrever \n\n");

    for ( i=0; i<9; i++ )
        {
            for ( j=0; j<9; j++ )
                {
                    printf ("%d ",MatrizFixa[i][j]);
                }
                printf("\n");
        }
        
        scanf("\n%d", &n);
        
    }while(n==0);
}
