#include <stdio.h>
#include <stdlib.h>


long double sum_series(int number)
{
    long double sum = 0;
    for (int i = 1; i <= number; i++)
    {
        if (i%2==1)
            sum -= 1.0/i;
        else
            sum += 1.0/i;
    }
    return sum;
}

long double sum_series2(int number)
{
    long double sum = 0;
    for (int i=(number+1); i<=2*number; i++)
    {
        sum -= 1.0/i;
    }
    return sum;
}


int main()
{
    int number;
    printf("number = ");
    scanf("%d", &number);
    printf("%.18Lf\n", sum_series(number));
    printf("%.18Lf\n", sum_series2(number));
    return 0;
}
