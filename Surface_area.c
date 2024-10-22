#include <stdio.h>

int main() {
    float radius, height, Surface_area;

    printf("Enter the radius of the cylinder: ");
    scanf("%f", &radius);

    printf("Enter the height of the cylinder: ");
    scanf("%f", &height);

    Surface_area = 2 * (22/7.0) * radius * (radius + height);

    printf("The surface area of the cylinder is: %.2f\n", Surface_area);

    return 0;
}