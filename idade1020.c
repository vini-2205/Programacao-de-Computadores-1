#include <stdio.h>
#include <stdlib.h>

int main(){
 int i, v1,v2,v3;
 int r1,r2;
 scanf("%d",&i);
 v1 = i/365;
 r1 = i % 365;
 v2 = r1/30;
 r2 = r1 % 30;
 v3 = r2/1;
 printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",v1,v2,v3);
 return 0;

}
