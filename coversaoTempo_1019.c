#include <stdio.h>
#include <stdlib.h>

int main(){
 int t,v1,v2,v3;
 int r1,r2;
 scanf("%d",&t);
 v1 = t/3600;
 r1 = t % 3600;
 v2 = r1/60;
 r2 = r1 % 60;
 v3 = r2/1;
 printf("%d:%d:%d\n",v1,v2,v3);
 return 0;
}
