#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void printDiamond(int n, char symbol) { 
    for (int i = -n/2 ; i <= n/2 ; i++) { 
        int spaces = abs(i), stars = n - 2 * abs(i);
        while (spaces--) printf(" ");
        while (stars--) printf("%c", symbol);
        printf("\n");
    }
}

int main() {
    int n;
    char symbol;

    while (1) {
        printf("Podaj wymiar diamentu (nieparzysta dodatnia): ");
        if (scanf("%d", &n) != 1 || n < 1 || n % 2 == 0) { 			            // walidacja dla n
            printf("Podales niemozliwy wymiar!\n");
            while (getchar() != '\n');  					                    // czyszczenie buforu
            continue;
        }

        printf("Podaj znak (np. * lub #): ");
        if (scanf(" %c", &symbol) != 1 || !isprint((unsigned char)symbol)) { 	// walidacja dla symbol
            printf("Nie podales prawidlowego symbolu!\n");
            while (getchar() != '\n');						                    // czyszczenie buforu
            continue;
        }

        printDiamond(n, symbol);
        break;
    }

    return 0;
}
