#include <stdio.h>
int main() {
    int i, j, k;
    int n = 5;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n - i - 1; j++) {
            printf(" ");
        }
        for (k = n - i - 1; k < n; k++) {
            printf("%c ", 'A' + k);
        }
        printf("\n");
    }
    return 0;
}