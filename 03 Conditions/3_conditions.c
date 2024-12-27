#include <stdio.h>

int main() {
    int num;

    printf("Enter a single-digit integer: ");
    scanf("%d", &num);

    if (num >= 0 && num <= 9) {
        switch (num) {
            case 0:
                printf("zero\n");
                break;
            case 1:
                printf("one\n");
                break;
            case 2:
                printf("two\n");
                break;
            case 3:
                printf("three\n");
                break;
            case 4:
                printf("four\n");
                break;
            case 5:
                printf("five\n");
                break;
            case 6:
                printf("six\n");
                break;
            case 7:
                printf("seven\n");
                break;
            case 8:
                printf("eight\n");
                break;
            case 9:
                printf("nine\n");
                break;
            default:
                printf("Invalid input. Please enter a single-digit integer.\n");
        }
    } else {
        printf("Invalid input. Please enter a single-digit integer (0 - 9).\n");
    }

    return 0;
}