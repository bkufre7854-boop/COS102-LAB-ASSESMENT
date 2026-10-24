#include <stdio.h>

int main() {
    int angle1, angle2, angle3;
    printf("Enter first angle: ");
    scanf("%d", &angle1);
    printf("Enter second angle: ");
    scanf("%d", &angle2);
    angle3 = 180 - (angle1 + angle2);
    printf("Third angle is: %d\n", angle3);
    if (angle1 == 90 || angle2 == 90 || angle3 == 90) {
        printf("This is a Right-angled Triangle!\n");
    } else {
        printf("This is NOT a Right-angled Triangle.\n");
    }
    return 0;
}