#include <stdio.h>
#include<stdlib.h>

int main(){
 int A,v1,v2,v3,v4,v5,v6,v7;
 int s = 100,r1,r2,r3,r4,r5,r6;
 scanf("%d",&A);
 v1 = A/s;
 r1 = A % s;
 v2 = r1/50;
 r2 = r1 % 50;
 v3 = r2/20;
 r3 = r2 % 20;
 v4 = r3/10;
 r4 = r3 % 10;
 v5 = r4/5;
 r5 = r4 % 5;
 v6 = r5/2;
 r6 = r5 % 2;
 v7 = r6/1;
 printf("%d\n%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n",A, v1,v2,v3,v4,v5,v6,v7);
 return 0;
}
