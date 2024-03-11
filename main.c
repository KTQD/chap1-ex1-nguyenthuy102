#include <stdio.h>

int main() {
    int height, width;

    // Nhập chiều cao và chiều rộng từ bàn phím
    printf("Nhập chiều cao của hình chữ nhật: ");
    scanf("%d", &height);
    printf("Nhập chiều rộng của hình chữ nhật: ");
    scanf("%d", &width);

    // Tính chu vi của hình chữ nhật
    int perimeter = 2 * (height + width);

    // In ra kết quả
    printf("Chu vi của hình chữ nhật là: %d\n", perimeter);

    return 0;
}
