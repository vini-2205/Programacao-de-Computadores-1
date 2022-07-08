#include <stdio.h>
#include <stdlib.h>
 
int main() {
    double raio, A, n = 3.14159;
    scanf("%lf",&raio);
    A = n * raio * raio;
    printf("A=%.4lf\n", A);
    return 0;
}
