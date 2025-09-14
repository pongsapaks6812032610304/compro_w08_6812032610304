#include <stdio.h>

int main() {
    int start, stop;

    // รับค่าจากผู้ใช้
    printf("Enter start number: ");
    scanf("%d", &start);
    printf("Enter stop number: ");
    scanf("%d", &stop);

    // แสดงค่าที่รับมา
    printf("Start number is %d and stop number is %d\n", start, stop);
    printf("-------------\n");

    // แสดงลำดับตัวเลขจาก start ถึง stop
    printf("Sequence from start to stop: ");
    for (int i = start; i <= stop; i++) {
        printf("%d ", i);
    }

    // ข้อความเมื่อจบโปรแกรม
    printf("\nThank you.\n");

    return 0;
}
