// Given a 2D arr int mat[3][3] = {{1,2,3},{4,5,6},{7,8,9}} , write a program to print the sum of 2nd row .

#include <stdio.h>

int main() {
    int mat[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int sum = 0, i;

    for (i = 0; i < 3; i++) {
        sum += mat[1][i];
    }

    printf("Sum of 2nd row = %d", sum);

    return 0;
}