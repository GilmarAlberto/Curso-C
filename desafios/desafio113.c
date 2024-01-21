/*

*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    char c = 'A';
    char *ptr = &c;  // ptr é um ponteiro que armazena o endereço de memória de c

    system("config.bat");

    printf("Valor apontado por ptr: %c\n", *ptr);  // Desreferenciamento de ponteiro
    printf("Valor de ptr (endereço de c): %p\n", ptr);  // Valor do próprio ponteiro
    printf("Endereço de memória de ptr: %p\n", &ptr);  // Endereço de memória do ponteiro

    return 0;
}
