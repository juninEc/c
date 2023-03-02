/*Desenvolvedor: Eduardo Caetano*/
#include <stdlib.h>
#include <stdio.h>


/*
Os valores de conversão é os atuais da data de criação do desafio 01/03/2023
Moedas utilizadas: 
- BRL, Real Brasileiro
- USD, Dolar Americano
- EUR, Euro
- GBP, Libra
*/ 


/*
Abaixo as funções que converte as moedas 
*/
void real(float valor){
    printf("\nConversao: "); 
    printf("\nDolar: %5.2f", valor * 5.21); 
    printf("\nEuro: %5.2f", valor * 5.53); 
    printf("\nLibra: %5.2f", valor * 6.23); 
}
void dolar(float valor){
    printf("\nConversao: "); 
    printf("\nReal: %5.2f", valor * 5.21);
    printf("\nEuro: %5.2f", valor *  0.94); 
    printf("\nLibra: %5.2f", valor * 1.19);

}
void euro(float valor){
    printf("\nConversao: "); 
    printf("\nReal: %5.2f", valor * 5.53);
    printf("\nDolar: %5.2f", valor * 0.94); 
    printf("\nLibra: %5.2f", valor * 1.13);

}
void libra(float valor){
    printf("\nConversao: "); 
    printf("\nReal: %5.2f", valor * 6.23);
    printf("\nDolar: %5.2f", valor * 1.19); 
    printf("\nEuro: %5.2f", valor * 1.13); 
}

int main(){

    int num; 
    float valor; 

    printf("\nConversor de Moeda | Melhor Câmbio");

    printf("\n------------------------------------"); 
    printf("\nSelecione a moeda: \n(1) Real \n(2) Dolar \n(3) Euro \n(4) Libra");
    printf("\n:"); 
    scanf("%d", &num);
    
    printf("\nInforme o valor a ser convertido: "); 
    scanf("%f", &valor); 

    switch (num){
        case 1:
            real(valor); 
            break;
        case 2:
            dolar(valor); 
            break;
        case 3:
            euro(valor); 
            break;
        case 4:
            libra(valor); 
            break;

        default:
            printf("ERRO!\nInsira um valor valido.");
            break;
    }

    return 0; 
}