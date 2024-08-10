#include <iostream>

int main() {

    int n,g;
    
    scanf ("%d %d", &n, &g);
    
    printf ("P2\n");
    printf ("%d %d\n", (n*8),(n*8));

    int linha = 0;
    int posicao = 0;
    
    for(int i = 0; i < n*8; i++){
        for(int j = 0; j < n*8; j++){
            if(linha < n){
                if(posicao < n){
                	printf ("%d",g);
                }else{
                	printf ("0");
                }
            }else{
                if(posicao < n){
                	printf ("0");
                }else{
                	printf ("%d",g);
                }
            }
            printf ("\t");
            posicao++;
            if(posicao == n*2){
                posicao = 0;
            }
        }
        printf ("\n");
        linha++;
        posicao = 0;
        if(linha == n*2){
            linha = 0;
        }
    }

}
