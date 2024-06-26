#include <stdio.h>

int main() {
    int n, m, p, q, a[10][10], b[10][10], c[10][10], i, j, k;

    printf("Enter the number of rows and columns of first matrix:\n");
    scanf("%d %d", &n, &m);

    printf("Enter the number of rows and columns of second matrix:\n");
    scanf("%d %d", &p, &q);

    if (n != p) {
        printf("Multiplication not possible\n");
        return 0;
    }

    printf("Enter the elements of first matrix:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            scanf("%d", &a[i][j]);

    printf("Enter the elements of second matrix:\n");
    for (i = 0; i < p; i++)
        for (j = 0; j < q; j++)
            scanf("%d", &b[i][j]);

    // Matrix multiplication
    for (i = 0; i < n; i++) {
        for (j = 0; j < q; j++) {
            c[i][j] = 0;
            for (k = 0; k < m; k++)
                c[i][j] += a[i][k] * b[k][j];
        }
    }

    // Output the resultant matrix
    printf("The resultant matrix is:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++)
            printf("%d ", c[i][j]);
        printf("\n");
    }

    return 0;
}
