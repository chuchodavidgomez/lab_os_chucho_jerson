#include "stdio.h"

void contarCaracter(char *array, char ch);
void test();

int main()
{
    test();
}

void contarCaracter(char *array, char letter) {
    int quantity = 0;
    char *str = array;

    while(*str != '\0'){
        if(*str == letter){
            quantity += 1;
        }
        str++;
    }

    if(quantity == 0) 
    printf("-1\n");
    else
    printf("la cantidad de %c en la cadena es: %d\n", letter, quantity);
}

void test(){
    char string[] = "codebabes";
    char letter = 'b';
    
    printf("la cadena es: %s \n", string);
    contarCaracter(string, letter);
}
