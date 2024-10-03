/*program to print loan qualification criteria
Author : Tsuma Abdhalla
Reg no ED102/G/19356/23
Course : Technical Education
Date : 3/10/2024
*/
#include <stdio.h>

int main() {
    int age;
    float income;
    
    // Prompt user for their age
    printf("Enter your age: ");
    scanf("%d", &age);

    // Prompt user for their annual income
    printf("Enter your annual income in Sh: ");
    scanf("%f", &income);

    // Prompt user for their annual income
    if (age >= 21 && income >= 21000) {
        printf("Congratulations, you qualify for a loan.\n");
    } else {
        printf("Unfortunately, we are unable to offer you a loan at this time.\n");
    }

    return 0;
}
