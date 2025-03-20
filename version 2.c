#include <stdio.h>
#include <math.h>
int main() {
    int a, b, c, x, y;
    printf("Enter value a: ");
    scanf("%d", &a);
    printf("Enter value b: ");
    scanf("%d", &b);
    printf("Enter value c: ");
    scanf("%d", &c);
    printf("Enter value x: ");
    scanf("%d", &x);
    y = a * pow(x, 2) + b * x + c;
    printf("The predicted value is given as %d units\n", y);
    return 0;
}
