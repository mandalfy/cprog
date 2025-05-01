#include <stdio.h>

int main() {
    int rows1, cols1, rows2, cols2;
    printf("Enter rows and columns for first matrix: ");
    scanf("%d %d", &rows1, &cols1);
    printf("Enter rows and columns for second matrix: ");
    scanf("%d %d", &rows2, &cols2);
    
    if (cols1 != rows2) {
        printf("Cannot multiply these matrices.\n");
        return 1;
    }
    
    int mat1[rows1][cols1], mat2[rows2][cols2], mat3[rows1][cols2];
    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }
    
    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }
    
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            mat3[i][j] = 0;
            for (int k = 0; k < cols1; k++) {
                mat3[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
    
    printf("The product matrix is:\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            printf("%d ", mat3[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}