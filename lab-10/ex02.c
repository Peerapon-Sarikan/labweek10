#include <stdio.h>
#include <stdbool.h>
bool isPrime(int num);
void printPrimesInRange(int start, int end);

int main() {
int start, end;

printf("Enter the start and end numbers: ");
scanf("%d %d", &start, &end);
printf("\nThe prime numbers within the intervals are:\n");
printPrimesInRange(start, end);

return 0;
}


bool isPrime(int num) 
{
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}


void printPrimesInRange(int start, int end) 
{
    for (int i = start; i <= end; i++) 
    {
    if (isPrime(i)) {
    printf("%d ", i);
        }
    }
    printf("\n");
}
