// Problem: 1036 - Fórmula de Bhaskara (https://www.urionlinejudge.com.br/judge/pt/problems/view/1036)

#include "stdio.h"
#include "math.h"
  
int main()
{
    double a = 0, b = 0, c = 0;
    scanf("%lf %lf %lf", &a, &b, &c);
  
    if(a == 0){
        printf("Impossivel calcular\n");
        return 0;
    }
  
    double delta = (b * b) - (4 * a * c);
  
    if(delta < 0){
        printf("Impossivel calcular\n");
        return 0;
    }
  
    double r1 = ((b *-1) + sqrt(delta)) / (2 * a);
    double r2 = ((b *-1) - sqrt(delta)) / (2 * a);
  
    printf("R1 = %.5lf\nR2 = %.5lf\n", r1, r2);
    return 0;
}