#include <stdio.h>
#include <stdlib.h>

int main(){
  float N1,N2,N3,N4,M;
  scanf("%f %f %f %f",&N1,&N2,&N3,&N4);
  M = ((2*N1)+(3*N2)+(4*N3)+(1*N4))/10.0;
  if(M>=7.0){
    printf("Media: %.1f\n", M);
    printf("Aluno aprovado.\n");
    }
  else{
    if(M<=4.9){
      printf("Media: %.1f\n", M);
      printf("Aluno reprovado.\n");
    }
    else{
      printf("Media: %.1f\n",M);
      printf("Aluno em exame.\n");
      float e, mn;
      scanf("%f",&e);
      printf("Nota do exame: %.1f\n",e);
      mn = (e+M)/2.0;
      if(mn<=4.9){
        printf("Aluno reprovado.\n");
        printf("Media: %.1f\n", mn);

      }
      else{
        printf("Aluno aprovado.\n");
        printf("Media final: %.1f\n", mn);

      }

    }

  }
    return 0;

}
