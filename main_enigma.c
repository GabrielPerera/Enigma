#include <stdio.h>
#include <stdlib.h>

// Codigo para gerar o menor numero de persistencia cinco.

int persistencia5(int numero); // função Para o calculo da persistencia.

int main(int argc, char *argv[]) {
    
    int numero = 10;
    
    while (persistencia5(numero) != 5) {
        numero++;
    }
    
    printf("O menor numero de persistencia 5 eh: %d\n\n", numero);
    
    return 0;
} // final da dunção main.

int persistencia5(int numero){
    
    int persistencia = 0; // iniciada em 0, por conta que ela ira contar a quantidade de vezes que multiplicamos os digitos.
    
    while (numero >= 10){ // loop que para sempre que num for menor que 10, no caso quando a multiplicação chega a apenas um digito.
        int produto = 1; // criada para calcular o produto dos digitos de num.
        
        while (numero > 0){ // while aninhado para calcular o produto dos digitos de num, enquanto num for maior que 0, esse loop ira persistir e rodar os comandos.
            produto *= numero % 10; // multiplica novoNum pelo ultimo digito de num.
            numero /= 10; // remove o ultimo digito de num e divide por 10.
        }
        numero = produto;
        persistencia++; // incrementa em 1 para cada vez que foi feita a multiplicação
    }
    
    return persistencia;
} // final da função persistencia.
