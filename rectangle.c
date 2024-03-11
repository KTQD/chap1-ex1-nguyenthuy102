#include <stdio.h>

int main() {
    float height, width, perimeter;

    // Input height of the rectangle
    scanf("%f", &height);

    // Input width of the rectangle
    scanf("%f", &width);

    // Calculate perimeter
    perimeter = 2 * (height + width);

    // Print the perimeter
    printf("Perimeter of the Rectangle is : %.2f\n", perimeter);

    return 0;
}
