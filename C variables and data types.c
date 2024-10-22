//C variables and data types
#include <stdio.h>//scanf(), printf()
int main(){
    char a;
    char name[5] = {};
    int age;
    float l = 12.5;
    float w = 13.55;
    float Area;
    double Weight;
    printf("Enter a character: ");
    scanf("%c", &a);
    printf("The character is %c \n",a);
    printf("Enter your name: ");
    scanf("%s", &name);
    printf("The name is %s \n",name);
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("The age is %d years \n",age);
    printf("Enter the Length: ");
    scanf("%f", &a);
    printf("Enter the Width: ");
    scanf("%f", &a);
    Area = l * w;
    printf("The area is %.3f metres \n",Area);
    printf("Enter your weight: ");
    scanf("%lf", &Weight);
    printf("The weight is %.2lf kg",Weight);
    
    
    
    return 0;
}