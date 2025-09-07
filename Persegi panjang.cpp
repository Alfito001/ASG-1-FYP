#include <stdio.h>

int main() {
    int length = 5;
    int width = 3;
    int area = length * width;

    printf("Rectangle Area with Following Formula\n");
    printf("Length = %d, Width = %d\n", length, width);
    printf("Area = %d\n\n", area);

    int userLength, userWidth, userArea;

    printf("Rectangle Area with User Input\n");
    printf("Enter length: ");
    scanf("%d", &userLength);
    printf("Enter width: ");
    scanf("%d", &userWidth);

    userArea = userLength * userWidth;
    printf("Area = %d\n", userArea);

    return 0;
}
