#include <stdio.h>

int main() {
    int height, width;

    // Input height and width from the keyboard
    scanf("%d", &height);
    scanf("%d", &width);

    // Calculate the perimeter of the rectangle
    int perimeter = 2 * (height + width);

    // Print the result
    printf("%d", perimeter);

    return 0;
}
