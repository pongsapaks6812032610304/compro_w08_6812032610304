#include <stdio.h>

int main() {
    // ใช้ for loop เพื่อแสดงเลขคู่ตั้งแต่ 2 ถึง 10
    for (int i = 2; i <= 10; i += 2) {
        printf("%d ", i); // แสดงค่าของ i
    }

    printf("\nEnd of loop\n"); // แสดงข้อความเมื่อจบลูป
    return 0;
}
