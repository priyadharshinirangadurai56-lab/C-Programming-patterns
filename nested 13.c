#include <stdio.h>
int main() {
    int k=1;
    for (int i=1; i<=5; i++) {
        for (int j=1; j<i+1; j++) {
            printf("%d",k);
            k=k+1;
        }
        printf("\n");
    }
}
