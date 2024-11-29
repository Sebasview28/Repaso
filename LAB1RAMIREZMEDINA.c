#include <stdio.h>
#include <string.h>

void convertirBase(int n, int b) {
    char resultado[3000]; // Al tener que transformar números grandes y fechas actuales pondremos que no sobrepase los 3000 caracteres
    int index = 0;
//holiiid
//cómo nos está yendo goood
   while (n > 0) {   while (n > 0) {
    if (b < 2 || b > 16) {
        printf("Base no válida\n");
        return;
    }

    while (n > 0) {
        int r = n % b;
        if (r < 10) {
            resultado[index++] = r + '0'; 
        } else {
            resultado[index++] = (r - 10) + 'A'; 
        }
        n = n / b;
    }

    resultado[index] = '\0'; 
    for (int i = 0; i < index / 2; i++) {
        char temp = resultado[i];
        resultado[i] = resultado[index - i - 1];
        resultado[index - i - 1] = temp;
    }

    printf("El número en base %d es: %s\n", b, resultado);
}

int main() {
    int n, b;
    printf("Ingrese un número en base 10: ");
    scanf("%d", &n);
    printf("Ingrese la base a la que desea convertir (2-16): ");
    scanf("%d", &b);
    
    convertirBase(n, b);
    
    return 0;
}

   while (n > 0) {   while (n > 0) {