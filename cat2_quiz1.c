/*
Name:Phineas Kiprotich
Reg No. :PA106/G/29213/25
Date: 03/11/2025
*/
#include<stdio.h>

int main() {
    // (i) Definition
    // An array is a collection of elements of the same data type
    // stored in contiguous memory locations and accessed using indices.

    // (ii) Declaration and initialization of 2D array
    int scores[2][2] = {
        {65, 92},
        {84, 72}
    };

    // (iii) Print elements using nested for loop
    printf("The elements of the array are:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", scores[i][j]);
        }
        printf("\n");
    }

    return 0;
}