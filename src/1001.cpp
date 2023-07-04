#include <stdio.h> 
#include <math.h>
 
double buffer[128 * 1024];
int main()
{
    int i = 0;
    unsigned long long n; 
    while (scanf_s("%llu", &n) != EOF) {
        buffer[i ++] = (double)sqrt(n * 1.0); 
    }
    for (; --i >= 0; ) {
        printf("%.4lf\n", buffer[i]); 
    }
    return 0;
}