#include <stdio.h>


float calculateArea(float radius) {
    const float PI = 3.14159f;
    return PI * radius * radius;
}

int main() {
    float radius, area;
    
    
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    
    
    area = calculateArea(radius);
    
    
    printf("The area of the circle with radius %.2f is: %.2f\n", radius, area);
    
    return 0;
}