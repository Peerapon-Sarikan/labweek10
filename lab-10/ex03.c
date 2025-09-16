#include <stdio.h>
int sumSquare(int x, int y);
int main() {
int x, y, sum;

printf("Enter the two integers: ");
    scanf("%d %d", &x, &y);
    sum = sumSquare(x, y);
    printf("Sum of squares of %d and %d is %d\n", x, y, sum);
    return 0;
}

int sumSquare(int x, int y) {
    return (x * x) + (y * y);
}
