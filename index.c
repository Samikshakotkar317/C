#include <stdio.h>

int main() {
    int l, b, area;

    printf("Enter the first number: ");
    scanf("%d", &l);

    printf("Enter the second number: ");
    scanf("%d", &b);

    area = l * b;

    printf("The area of rectangle is: %d", area);

    return 0;
}