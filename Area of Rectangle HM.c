#include <stdio.h>

// Function to set dimensions and calculate area
double getArea(double length, double breadth) {
    return length * breadth;
}

int main() {
    double length, breadth, area;

    // Taking input from user
    printf("Enter length: ");
    scanf("%lf", &length);

    printf("Enter breadth: ");
    scanf("%lf", &breadth);

    // Function call
    area = getArea(length, breadth);

    // Output
    printf("Area of Rectangle: %.2lf\n", area);

    return 0;
}
