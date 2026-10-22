#include <stdio.h>

int main() {
    float angle1, angle2, angle3;

    printf("Enter first angle: ");
    scanf("%f", &angle1);
    printf("Enter second angle: ");
    scanf("%f", &angle2);

    // Calculate the third angle
    angle3 = 180.0f - (angle1 + angle2);

    // Check if any of the three angles is 90 degrees
    if (angle1 == 90.0f || angle2 == 90.0f || angle3 == 90.0f) {
        printf("It is a right-angled triangle.\n");
    } else {
        printf("It is NOT a right-angled triangle.\n");
    }

    return 0;
}