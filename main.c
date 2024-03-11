#include <stdio.h>

int main() {
    int height, width;

    // Nhập chiều cao và chiều rộng từ bàn phím
    scanf("%d", &height);
    scanf("%d", &width);

    // Tính chu vi của hình chữ nhật
    int perimeter = 2 * (height + width);

    // In ra kết quả
    printf("%d", perimeter);

    return 0;
}
