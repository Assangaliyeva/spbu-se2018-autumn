#include <stdlib.h>
#include <math.h>
int num;
double sum;
const double exact = -0.693147180559945309417;

double sum_series()
{ double base= 0., sum[num];
sum [0]=0;
for (int n=1; n<num+1; n++)
{ base = (double)((pow(-1,n)/n));
sum[n] = sum[n-1] + base ;
sum[n] = sum[n];
};
return sum[num]*-1;
}

int main() {

printf("n=");
scanf("%d", &num);
printf("%.18lf\n", sum_series());
printf("%.18lf\n",  sum_series()+exact);
getch();
}
