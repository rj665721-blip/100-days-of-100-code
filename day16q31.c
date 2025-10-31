#include <stdio.h>

int main() {
    int n;
    long long binary = 0;
    int place = 1;
    scanf("%d", &n);
    if (n == 0) {
        printf("0\n");
        return 0;
    }
    while (n > 0) {
        int rem = n % 2;
        binary = binary + rem * place;
        place = place * 10;
        n = n / 2;
    }
    printf("%lld\n", binary);
    return 0;
}
