#include <stdio.h>

int main() {
    int i = 0;
    int sum = 0;

    do {
        printf("Enter score (-1 to exit): ");
        scanf("%d", &i);
        if (i != -1) {
            sum += i;
        }
    } while (i != -1);

    printf("Total sum = %d\n", sum);
    return 0;
        
}
