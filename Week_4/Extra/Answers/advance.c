//Print a number pyramid.
#include <stdio.h>

void printPyramid(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) printf(" "); // Spaces
        for (int j = 1; j <= i; j++) printf("%d ", j); // Ascending
        for (int j = i - 1; j >= 1; j--) printf("%d ", j); // Descending
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    printPyramid(n);
    return 0;
}