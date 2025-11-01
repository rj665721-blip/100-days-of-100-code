#include <stdio.h>
#include <math.h>

int main() {
    int num, temp, digits = 0;
    double sum = 0;
    scanf("%d", &num);
    temp = num;
    while (temp != 0) {
        temp /= 10;
        digits++;
    }
    temp = num;
    while (temp != 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }
    if ((int)sum == num)
        printf("Armstrong Number");
    else
        printf("Not an Armstrong Number");
    return 0;
}
