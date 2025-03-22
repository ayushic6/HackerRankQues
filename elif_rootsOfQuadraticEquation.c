#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    
    int d = pow(b, 2) - 4 * a * c;
    
    if (d > 0) {
        double root1 = (-b + sqrt(d)) / (2.0 * a); 
        double root2 = (-b - sqrt(d)) / (2.0 * a);
        printf("Roots: %.2lf, %.2lf\n", root1, root2);
        printf("Type: Real and Distinct\n");
    } 
    else if (d == 0) {
        double root1 = -b / (2.0 * a);
        printf("Roots: %.2lf, %.2lf\n", root1, root1);
        printf("Type: Real and Equal\n");
    } 
    else {
        double realPart = -b / (2.0 * a);
        double imaginaryPart = sqrt(-d) / (2.0 * a);
        printf("Roots: %.2lf + %.2lfi, %.2lf - %.2lfi\n", realPart, imaginaryPart, realPart, imaginaryPart);
        printf("Type: Complex\n");
    }

    return 0;
}
