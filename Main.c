#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "Ingresso.h"
#include "Obras.h"

#define MAX 1000
#define TRUE 1
#define FALSE 0

int main(){

    setlocale(LC_ALL, "");

    Ingresso ingressos[MAX];

    int ticket = 0;

    typedef struct ingresso Ingresso;
    char obra[30];

int opc;

do{
    imprimirCabecalho();
    exibirMenu();
    scanf("%d", opc);
    Ingresso ingrs;
    switch(opc){
        case 1: //Comprar ticket
            break;
        case 2: //Buscar obra
            break;
        case 3: //Opção de pagamento
            break;
        case 4: //Sair
            break;
            return 0;
        default: puts("Opção inexistente, tente novamente!");
    }

}while(TRUE);
}
