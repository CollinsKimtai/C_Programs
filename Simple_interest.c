// Simple interest
#include <stdio.h> //scanf(), printf()

int main() {
    float principal;
    float duration;
    float rate;
    float simple_interest;
    printf("Enter the Principal amount: ");
    scanf("%f", &principal);
    printf("Enter the duration: ");
    scanf("%f", &duration);
    printf("Enter the rate: ");
    scanf("%f", &rate);
    simple_interest = (principal * duration * rate) /100;
    printf("The simple interest is %.2f",simple_interest );
    
    
    
    
    
    return 0;
}