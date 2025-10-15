#include <stdio.h>
#include <stdlib.h>

void printDiamond(int n, char symbol) {
    if (n % 2 == 0) n++; // Zapewnia parzystą szerokość
    if (n <= 0) n = 2;   // Minimalna parzysta szerokość
    for (int i = -n/2 ; i <= n/2 ; i++) { // Pomijamy ostatni wiersz, jeśli i == n/2
        int spaces = abs(i), stars = n - 2 * abs(i);
        while (spaces--) printf(" ");
        while (stars--) printf("%c", symbol);
        printf("\n");
    }
}

int main() {
    int n;
    char symbol;
    printf("Podaj szerokosc diamentu (parzysta): ");
    scanf("%d", &n);
    printf("Podaj znak (np. * lub #): ");
    scanf(" %c", &symbol);
    printDiamond(n, symbol);
    return 0;
}