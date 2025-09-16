#include <stdio.h>
#include <math.h>
float circleArea(float r);
float circleCircumference(float r);


int main() {
    float r;
    printf("Enter the radius in cm: ");
    scanf("%f", &r);
    
    printf("Circumference: %.2f\n", circleCircumference(r));
    printf("Area = %.2f\n", circleArea(r));
    return 0;
}


float circleArea(float r) {
return 3.14 * r* r;}
float circleCircumference(float r){
    return 3.14 * r * 2;
}
    
