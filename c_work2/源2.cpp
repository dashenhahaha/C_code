#include<stdio.h>
int main() {
    int a, b, c;
    double d;
    double sum;
    scanf("%d", &b);
    c = 1;
    for (a = 1; a <= b; a = a + 3) {
        c++;
        d = 1.0 / a;
        if (c % 2 == 0) {
            d = -d;
        }
        sum += d;
    }
    printf("sum = %d", sum);
    return 0;
}