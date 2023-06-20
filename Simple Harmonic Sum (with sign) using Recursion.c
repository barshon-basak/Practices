#include <stdio.h>

double harmonicSum(int n, int sign) {
    if (n == 1) {
        return sign * 1.0;
    }

    return (sign * 1.0 / n) + harmonicSum(n - 1, -sign);
}

int main() {
    int terms;
    printf("Enter the number of terms: ");
    scanf("%d", &terms);

    double sum = harmonicSum(terms,1);

    printf("The sum of the simple harmonic series with %d terms is: %.4lf\n", terms, sum);

    return 0;
}
