#include <stdio.h>

int main() {
    int i = 2; // กำหนดค่าเริ่มต้นให้ i เท่ากับ 2

    while (i <= 10) { // วนลูปขณะที่ i น้อยกว่าหรือเท่ากับ 10
        printf("%d ", i); // แสดงค่าของ i
        i += 2; // เพิ่มค่า i ทีละ 2
    }

    printf("\nEnd of loop\n"); // แสดงข้อความเมื่อจบลูป
    return 0;
}
