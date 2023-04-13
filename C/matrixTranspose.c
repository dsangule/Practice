#include<stdio.h>

int main(){

    int A[10][10];
    int row, col;
    printf("Enter number of Rows: ");
    scanf("%d", &row);
    printf("Enter number of Columns: ");
    scanf("%d", &col);

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            scanf("%d", &A[i][j]);
        }
    }

    for(int i=0; i<col; i++){
        for(int j=0; j<row; j++){
            printf("%d ", A[j][i]);
        }
        printf("\n");
    }

    return 0;
}