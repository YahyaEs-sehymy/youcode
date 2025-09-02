#include <stdio.h>

int main() {
    float km, yards;

    // إدخال المسافة بالكيلومتر
    printf("Entrez la distance en kilometres : ");
    scanf("%f", &km);

    // تحويل الكيلومتر إلى Yards
    yards = km * 1093.61;

    // عرض النتيجة
    printf("%.2f km = %.2f yards\n", km, yards);

    return 0;
}
