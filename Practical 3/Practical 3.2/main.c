#include <stdio.h>

int main() {
    int num, i = 1;
    unsigned long long fact = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0)
          printf("Factorial is not defined for negative numbers. ");
    else{
    while (i <= num) {
        fact *= i;
        i++;
    }
    printf("Factorial of %d = %llu", num, fact);
}
    return 0;




}
