#include <stdio.h>

int main() {
    int angle1, angle2, angle3;

    printf("Enter the three angles of the triangle: ");
    scanf("%d %d %d", &angle1, &angle2, &angle3);

    if (angle1 > 0 && angle1 < 180 &&
        angle2 > 0 && angle2 < 180 &&
        angle3 > 0 && angle3 < 180) {
        if (angle1 + angle2 + angle3 == 180) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    } else {
        printf("Invalid input. Please enter angles between 0 and 180.\n");
    }

    return 0;
}