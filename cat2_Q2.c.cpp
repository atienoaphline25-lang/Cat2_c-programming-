/* 
   Name: APHLINE ATIENO
   Reg No: CT101/G/26529/25
   Program: GROSS PAY CALCULATION
*/

#include <stdio.h>

int main() {
    float hours, rate, grossPay, taxes, netPay;
    float overtimeHours, overtimePay;

    // Request user input
    printf("Enter hours worked in a week: ");
    scanf("%f", &hours);

    printf("Enter hourly wage: ");
    scanf("%f", &rate);

    // Calculate gross pay (with overtime)
    if (hours > 40) {
        overtimeHours = hours - 40;
        overtimePay = overtimeHours * rate * 1.5;
        grossPay = (40 * rate) + overtimePay;
    } else {
        grossPay = hours * rate;
    }

    // Calculate taxes
    if (grossPay <= 600) {
        taxes = grossPay * 0.15;
    } else {
        taxes = (600 * 0.15) + ((grossPay - 600) * 0.20);
    }

    // Calculate net pay
    netPay = grossPay - taxes;

    // Display results
    printf("\nGross Pay: $%.2f\n", grossPay);
    printf("Taxes: $%.2f\n", taxes);
    printf("Net Pay: $%.2f\n", netPay);

    return 0;
}