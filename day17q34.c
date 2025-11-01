#include <stdio.h>

int main() {
    int num, i, flag = 0;
    scanf("%d", &num);
    if (num <= 1) {
        printf("Not Prime");
        return 0;
    }
    for (i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        printf("Prime");
    else
        printf("Not Prime");
    return 0;
}
