#include <stdio.h>
#include <math.h>  // Required for sqrt()

int main() {
    double a, b, hypotenuse;

    // Input the lengths of the two sides
    printf("Enter side a: ");
    scanf("%lf", &a);

    printf("Enter side b: ");
    scanf("%lf", &b);

    // Calculate hypotenuse
    hypotenuse = sqrt(a * a + b * b);

    // Output the result
    printf("The hypotenuse is: %.2lf\n", hypotenuse);

    return 0;
}
