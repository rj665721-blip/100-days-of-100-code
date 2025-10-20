#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, time, simple_interest, compound_interest;
    scanf("%lf %lf %lf", &principal, &rate, &time);
    simple_interest = (principal * rate * time) / 100;
    compound_interest = principal * pow((1 + rate / 100), time) - principal;
    printf("Simple Interest: %.2lf\n", simple_interest);
    printf("Compound Interest: %.2lf\n", compound_interest);
    return 0;
}
