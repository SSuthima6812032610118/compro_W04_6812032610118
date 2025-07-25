#include <stdio.h>

int main() {
    char nameInitial = 'K';         // ตัวอักษรตัวแรก
    int age = 18;                   // อายุ
    float weight = 68.1;            // น้ำหนัก
    char gender[] = "Female";       // เพศ

    printf("Initial: %c\n", nameInitial);
    printf("Age: %d\n", age);
    printf("Weight: %.1f\n", weight);
    printf("Gender: %s\n", gender);

    return 0;
}