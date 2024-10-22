#include <stdio.h>
#include <math.h>

int main() {
    float principal;
    float rate;
    float time ;
    float amount;
    float compound_interest;

    printf("Enter principal amount: ");
    scanf("%f", &principal );

    printf("Enter rate: ");
    scanf("%f", &rate);

    printf("Enter time: ");
    scanf("%f", &time);

    amount = principal * pow((1 + rate / 100), time);
    compound_interest = amount - principal;

    printf("Compound Interest = %f", compound_interest);

    return 0;
}