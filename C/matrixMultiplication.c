#include<stdio.h>

int main(){

    int A[10][10];
    int B[10][10];
    int M[10][10];

    int row1, col1row2, col2;
    printf("Enter number of Rows of First Matrix: ");
    scanf("%d", &row1);
    printf("Enter number of Columns of First Matrix: ");
    scanf("%d", &col1row2);
    printf("Number of Rows of Second Matrix: %d\n", col1row2);
    printf("Enter number of Columns of Second Matrix: ");
    scanf("%d", &col2);

    printf("Enter values for First Matrix: \n");
    for(int i=0; i<row1; i++){
        for(int j=0; j<col1row2; j++){
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter values for Second Matrix: \n");
    for(int i=0; i<col1row2; i++){
        for(int j=0; j<col2; j++){
            scanf("%d", &B[i][j]);
        }
    }

    for(int i=0; i<row1; i++){
		for(int j=0; j<col2; j++){
			M[i][j] = 0;
			for(int k=0; k<col1row2; k++){
				M[i][j] += A[i][k]*B[k][j];
			}
		}
	}
	
	printf("Multiplied matrix:\n");
	for(int i=0; i<row1; i++){
		for(int j=0; j<col2; j++){
			printf("%d ", M[i][j]);
		}
		printf("\n");
	}

    return 0;
}