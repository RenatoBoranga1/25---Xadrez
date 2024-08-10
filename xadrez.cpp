#include <iostream>
using namespace std;

int main() {

    int m,f;
    cin >> m >> f;
    
    cout << "P2\n";
    cout << m*8 << "\t" << m*8 << endl;
    cout << f << endl;

    int linha = 0;
    int posicao = 0;
    
    for(int i = 0; i < m*8; i++){
        for(int j = 0; j < m*8; j++){
            if(linha < m){
                if(posicao < m){
                    cout << f;
                }else{
                    cout << 0;
                }
            }else{
                if(posicao < m){
                    cout << 0;
                }else{
                    cout << f;
                }
            }
            cout << "\t";
            posicao++;
            if(posicao == m*2){
                posicao = 0;
            }
        }
        cout << endl;
        linha++;
        posicao = 0;
        if(linha == m*2){
            linha = 0;
        }
    }

}
