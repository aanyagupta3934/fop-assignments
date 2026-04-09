#include <stdio.h>

void addMatrices(int r, int c, int a[10][10], int b[10][10]) {
    printf("\nSum of Matrices:\n");
    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++)
            printf("%d ", a[i][j] + b[i][j]);
        printf("\n");
    }
}

void findSaddlePoint(int r, int c, int mat[10][10]) {
    for (int i = 0; i < r; i++) {
        int min_row = mat[i][0], col_ind = 0;
        for (int j = 1; j < c; j++) {
            if (min_row > mat[i][j]) {
                min_row = mat[i][j];
                col_ind = j;
            }
        }
        int k;
        for (k = 0; k < r; k++)
            if (min_row < mat[k][col_ind]) break;
        if (k == r) {
            printf("\nSaddle Point found: %d", min_row);
            return;
        }
    }
    printf("\nNo Saddle Point found.");
}

int main() {
    int r, c, a[10][10], b[10][10];
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter elements of Matrix A:\n");
    for(int i=0; i<r; i++)
        for(int j=0; j<c; j++) scanf("%d", &a[i][j]);

    printf("Enter elements of Matrix B:\n");
    for(int i=0; i<r; i++)
        for(int j=0; j<c; j++) scanf("%d", &b[i][j]);

    addMatrices(r, c, a, b);
    findSaddlePoint(r, c, a);

    return 0;
}