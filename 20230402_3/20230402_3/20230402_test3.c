#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num > 0) {
        printf("%d is a positive number.", num);
    }
    else {
        printf("%d is not a positive number.", num);
    }
    return 0;
}
