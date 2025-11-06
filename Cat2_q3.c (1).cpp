/* 
APHLINE ATIENO  
CT101/G/26529/25  
INTEGERS 
*/

#include <stdio.h>

int main() {
    FILE *inputFile, *outputFile;
    int i, num, sum = 0, count = 0;
    float average;
    char ch;

    // Step 1: Open input.txt to write 10 integers
    inputFile = fopen("input.txt", "w");
    if (inputFile == NULL) {
        printf("Error! Cannot open input.txt\n");
        return 0;
    }

    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &num);
        fprintf(inputFile, "%d\n", num); // Write number to file
    }
    fclose(inputFile);
    printf("\nNumbers saved to input.txt successfully!\n\n");

    // Step 2: Read numbers from input.txt and calculate sum and average
    inputFile = fopen("input.txt", "r");
    if (inputFile == NULL) {
        printf("Error! Cannot open input.txt\n");
        return 0;
    }

    while (fscanf(inputFile, "%d", &num) == 1) {
        sum += num;
        count++;
    }
    fclose(inputFile);

    if (count == 0) {
        printf("No numbers found in input.txt\n");
        return 0;
    }

    average = (float)sum / count;

    // Step 3: Write sum and average to output.txt
    outputFile = fopen("output.txt", "w");
    if (outputFile == NULL) {
        printf("Error! Cannot open output.txt\n");
        return 0;
    }

    fprintf(outputFile, "Sum = %d\n", sum);
    fprintf(outputFile, "Average = %.2f\n", average);
    fclose(outputFile);
    printf("Sum and average saved to output.txt successfully!\n\n");

    // Step 4: Display contents of both files
    printf("---- Contents of input.txt ----\n");
    inputFile = fopen("input.txt", "r");
    if (inputFile == NULL) {
        printf("Error! Cannot open input.txt\n");
        return 0;
    }
    while ((ch = fgetc(inputFile)) != EOF) {
        putchar(ch);
    }
    fclose(inputFile);

    printf("\n---- Contents of output.txt ----\n");
    outputFile = fopen("output.txt", "r");
    if (outputFile == NULL) {
        printf("Error! Cannot open output.txt\n");
        return 0;
    }
    while ((ch = fgetc(outputFile)) != EOF) {
        putchar(ch);
    }
    fclose(outputFile);

    printf("\n\nProgram finished successfully!\n");

    return 0;
}