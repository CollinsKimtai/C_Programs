#include <stdio.h>

int main() {
    
    int matrix[2][3][4] = {
        { {85, 85, 65, 32}, {14, 75, 56, 29}, {64, 35, 78, 12} },
        { {45, 23, 67, 89}, {58, 94, 32, 11}, {72, 84, 91, 33} }
    };

    
    for (int i = 0; i < 2; i++) {        
        for (int j = 0; j < 3; j++) {     
            for (int k = 0; k < 4; k++) { 
                printf("matrix[%d][%d][%d] = %d\n", i, j, k, matrix[i][j][k]);
            }
        }
    }

    return 0;
}