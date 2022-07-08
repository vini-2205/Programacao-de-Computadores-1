#include <stdio.h>
#include <stdlib.h>

int main(){
 int a,b,c,m,g;
 scanf("%d",&a);
 scanf("%d",&b);
 scanf("%d",&c);
 m = (a+b+abs(a-b))/2;
 g = (m+c+abs(m-c))/2;
 printf("%d eh o maior\n",g);
 return 0;
}
