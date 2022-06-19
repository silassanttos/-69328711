#include <cs50.h>
#include <stdio.h>


int main(void)
{
    int n;
do
{
    n = get_int("Height: ");
}while (n < 1 || n > 8);
// este loop for cria novas linhas

for (int i = 0; i < n; i++){
    // aqui eu tenho dois loops for aninhados dentro do loop for acima,
    // Eu cometi o erro anteriormente de ter dois loops internos aninhados.


    // este 2º for loop imprime n-1-i espaços
    // porque se n=5, então na 4ª linha, haverá 5-1-3 espaços/pontos
    for (int j = 0; j < n - 1 - i; j++){
        printf(" ");
    }
    // este 3º for loop imprime i+1 hashes
    // porque se n=5, então na 4ª linha, haverá 3+1 hashes.
    // (3 porque você conta a partir de 0)

    for (int j = 0; j < i + 1; j++){
        printf("#");
    }

    printf("\n");
  }


 }