#include <stdio.h>

int validate_d1(long);
int validate_d2(long);

int main(void) {
    
    long cpf;

    printf("Digite o CPF: "); 
    scanf("%ld", &cpf);
    
    if((validate_d1(cpf)) && validate_d2(cpf)) {
        printf("Válido!");
    } else {
        printf("Inválido!");
    }

    return 0;

}

int validate_d1(long cpf) {
    
    int cont = 2;  // contador para a multiplicação;
    
    long digitos = cpf / 100;   // Corta os dois últimos alg. do CPF;
    long digito;                // Dígito atual do laço de repetição;
    long penultimo_digito = cpf / 10 % 10;
    long aux = 0;   // aux = "depósito"

    while(digitos != 0) {

        digito = digitos % 10;
        aux += digito * cont;
        digitos /= 10;
        cont ++;
    }
    
    if ((aux * 10 % 11) == penultimo_digito) {
        validate_d2(cpf);
        return 1;
    } else if((aux * 10 % 11) == 10 && penultimo_digito == 0) {
        return 1;
    }

    return 0;

}

int validate_d2(long cpf) { // 52998224725
    
    int cont = 2;
    
    long digito;
    long digitos = cpf / 10;
    long ultimo_digito = cpf % 10;
    long aux = 0;

    while(digitos != 0) {

        digito = digitos % 10;
        aux += digito * cont;
        digitos /=  10;
        cont++;
    }

    if((aux * 10 % 11) == ultimo_digito) {
        return 1;
    } else if((aux * 10 % 11) == 10 && ultimo_digito == 0){
        return 1;
    }

    return 0;
}
