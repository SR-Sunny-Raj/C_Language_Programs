#include <stdio.h>

int main()
{
    int i, j, n, fact, sign = -1;
    float x, p, sum = 0;

    printf("Enter the value of x of cos(x) series : ");
    scanf("%f", &x);
    printf("Enter the limit upto which you want to expand the series : ");
    scanf("%d", &n);

    for (i = 2; i <= n; i += 2)
    {
        p = 1;
        fact = 1;

        for (j = 1; j <= i; j++)
        {
            p = p * x;
            fact = fact * j;
        }

        sum += sign * p / fact;
        sign = -1 * sign;
    }

    printf("cos %0.2f = %f", x, 1 + sum);

    return 0;
}
